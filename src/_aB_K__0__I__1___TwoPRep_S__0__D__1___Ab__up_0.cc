#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3924)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+9972)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+12996)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1008)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+3924)*1+lsi)*1]), &(inteval->stack[((hsi*3888+12996)*1+lsi)*1]), &(inteval->stack[((hsi*3024+9972)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6048+3924)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
