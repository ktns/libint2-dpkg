#include <libint2.h>
#include <HRRPart1bra0ket0dd.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,310)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+670)*1+lsi)*1]), &(inteval->stack[((hsi*100+60)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+850)*1+lsi)*1]), &(inteval->stack[((hsi*150+160)*1+lsi)*1]), &(inteval->stack[((hsi*100+60)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+310)*1+lsi)*1]), &(inteval->stack[((hsi*300+850)*1+lsi)*1]), &(inteval->stack[((hsi*180+670)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+310)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
