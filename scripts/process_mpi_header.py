import re


class MPIFuncSpec:
    def __init__(self, string):
        self.return_type = string.split()[0]
        self.name = re.search(r'PMPI_(.*?)\(', string).group(1)
        params = re.search(r'\((.*?)\)', string).group(1)
        params = params.split(',')

        lparams = []
        oparams = []

        if params == ['void']:
            lparams.append(('void', ''))
            oparams.append(('void', ''))

        else:
            for px in params:
                px = px.split()
                var = px[-1]
                types = px[:-1]

                oparams.append((' '.join(types), var))
                
                acount = var.count('*')
                if acount > 0:
                    types += ['*' * acount]

                bcount = var.count('[')
                if bcount > 0:
                    types += ['*' * bcount]
                
                varl = re.findall(r'[\w]*', var)
                for vx in varl:
                    if len(vx) > 0:
                        var = vx
                        break

                lparams.append((' '.join(types), var))

        self.params = lparams
        self.oparams = oparams

    def __repr__(self):
        return self.func_decl()

    def func_decl(self):
        params = ', '.join(['{} {}'.format(a[0], a[1]) for a in self.oparams])
        return self.return_type + ' MPI_' + self.name + '(' + params + ')'

    def pfunc_call(self):
        params = ', '.join([a[1] for a in self.params])
        return 'PMPI_' + self.name + '(' + params + ')'



if __name__ == '__main__':

    with open('pmpi.h') as fh:
        mpi_header = fh.read()
 
    matches = re.findall(
        re.compile(r'([\w]* PMPI_+[\w]*\([\w\W]*?\))', re.MULTILINE | re.DOTALL),
        mpi_header
    )

    tmatches = []
    for mx in matches:
        if ('MPI_Pcontrol' in mx) or (mx.startswith('define')):
            continue
        else:
            tmatches.append(mx)
    matches = tmatches
    
    matches = [' '.join(mx.split()) for mx in matches]


    mpi_funcs = [MPIFuncSpec(mx) for mx in matches]
    
    with open('mpi_profile_base.cpp') as fh:
        base = fh.read()

    with open('mpi_profile.cpp', 'w') as fh:
        fh.write(base)

        for fx in mpi_funcs:
            template = '''
#ifndef MPI_{NAME}
extern "C" {FUNC_DECL} {{
    auto PM_r = new Record("MPI_{NAME}");
    PM_r->Init();
    {RETURN_TYPE} err = {PFUNC_CALL};
    PM_r->Finalize();
    event_list.push_back(PM_r);
    return err;
}}
#endif
'''.format(
                NAME=fx.name,
                RETURN_TYPE=fx.return_type,
                FUNC_DECL=fx.func_decl(),
                PFUNC_CALL=fx.pfunc_call(),
            )
            fh.write(template)
        fh.write('\n')





