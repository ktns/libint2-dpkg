#include <libint2.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1554)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+3654)*1+lsi)*1]), &(inteval->stack[((hsi*441+525)*1+lsi)*1]), &(inteval->stack[((hsi*315+210)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+4599)*1+lsi)*1]), &(inteval->stack[((hsi*315+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+5229)*1+lsi)*1]), &(inteval->stack[((hsi*945+3654)*1+lsi)*1]), &(inteval->stack[((hsi*630+4599)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+6489)*1+lsi)*1]), &(inteval->stack[((hsi*588+966)*1+lsi)*1]), &(inteval->stack[((hsi*441+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+7812)*1+lsi)*1]), &(inteval->stack[((hsi*1323+6489)*1+lsi)*1]), &(inteval->stack[((hsi*945+3654)*1+lsi)*1]),21);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+1554)*1+lsi)*1]), &(inteval->stack[((hsi*1890+7812)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5229)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2100+1554)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
