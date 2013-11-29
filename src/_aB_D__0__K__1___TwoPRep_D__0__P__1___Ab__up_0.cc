#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2511)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+6399)*1+lsi)*1]), &(inteval->stack[((hsi*450+846)*1+lsi)*1]), &(inteval->stack[((hsi*360+486)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+486)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1944+7479)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6399)*1+lsi)*1]), &(inteval->stack[((hsi*648+486)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+9423)*1+lsi)*1]), &(inteval->stack[((hsi*675+1836)*1+lsi)*1]), &(inteval->stack[((hsi*540+1296)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+11043)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9423)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6399)*1+lsi)*1]),108);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*3888+2511)*1+lsi)*1]), &(inteval->stack[((hsi*3240+11043)*1+lsi)*1]), &(inteval->stack[((hsi*1944+7479)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3888+2511)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
