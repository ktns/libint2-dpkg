#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_K__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7272)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+20232)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+25092)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+28980)*1+lsi)*1]), &(inteval->stack[((hsi*4860+20232)*1+lsi)*1]), &(inteval->stack[((hsi*3888+25092)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+36756)*1+lsi)*1]), &(inteval->stack[((hsi*2376+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2916)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+42696)*1+lsi)*1]), &(inteval->stack[((hsi*5940+36756)*1+lsi)*1]), &(inteval->stack[((hsi*4860+20232)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+7272)*1+lsi)*1]), &(inteval->stack[((hsi*9720+42696)*1+lsi)*1]), &(inteval->stack[((hsi*7776+28980)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12960+7272)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
