#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_K__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_K__0__I__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8280)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+23400)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1008)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+27288)*1+lsi)*1]), &(inteval->stack[((hsi*1980+3924)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2304)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+32148)*1+lsi)*1]), &(inteval->stack[((hsi*4860+27288)*1+lsi)*1]), &(inteval->stack[((hsi*3888+23400)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+39924)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+42948)*1+lsi)*1]), &(inteval->stack[((hsi*3888+23400)*1+lsi)*1]), &(inteval->stack[((hsi*3024+39924)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+48996)*1+lsi)*1]), &(inteval->stack[((hsi*7776+32148)*1+lsi)*1]), &(inteval->stack[((hsi*6048+42948)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+39924)*1+lsi)*1]), &(inteval->stack[((hsi*2376+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1980+3924)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+59076)*1+lsi)*1]), &(inteval->stack[((hsi*5940+39924)*1+lsi)*1]), &(inteval->stack[((hsi*4860+27288)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+68796)*1+lsi)*1]), &(inteval->stack[((hsi*9720+59076)*1+lsi)*1]), &(inteval->stack[((hsi*7776+32148)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+8280)*1+lsi)*1]), &(inteval->stack[((hsi*12960+68796)*1+lsi)*1]), &(inteval->stack[((hsi*10080+48996)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*15120+8280)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
