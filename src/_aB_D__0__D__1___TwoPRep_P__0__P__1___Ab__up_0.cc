#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0dp.h>
#include <_aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,256)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+580)*1+lsi)*1]), &(inteval->stack[((hsi*60+36)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+688)*1+lsi)*1]), &(inteval->stack[((hsi*100+156)*1+lsi)*1]), &(inteval->stack[((hsi*60+96)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+256)*1+lsi)*1]), &(inteval->stack[((hsi*180+688)*1+lsi)*1]), &(inteval->stack[((hsi*108+580)*1+lsi)*1]),18);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*324+256)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
