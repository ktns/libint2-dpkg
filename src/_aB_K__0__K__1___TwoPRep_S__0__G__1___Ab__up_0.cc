#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10080)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+29520)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+34380)*1+lsi)*1]), &(inteval->stack[((hsi*2376+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2916)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+40320)*1+lsi)*1]), &(inteval->stack[((hsi*5940+34380)*1+lsi)*1]), &(inteval->stack[((hsi*4860+29520)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+50040)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+53928)*1+lsi)*1]), &(inteval->stack[((hsi*4860+29520)*1+lsi)*1]), &(inteval->stack[((hsi*3888+50040)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+61704)*1+lsi)*1]), &(inteval->stack[((hsi*9720+40320)*1+lsi)*1]), &(inteval->stack[((hsi*7776+53928)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+50040)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7272)*1+lsi)*1]), &(inteval->stack[((hsi*2376+4896)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+74664)*1+lsi)*1]), &(inteval->stack[((hsi*7128+50040)*1+lsi)*1]), &(inteval->stack[((hsi*5940+34380)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+86544)*1+lsi)*1]), &(inteval->stack[((hsi*11880+74664)*1+lsi)*1]), &(inteval->stack[((hsi*9720+40320)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+10080)*1+lsi)*1]), &(inteval->stack[((hsi*16200+86544)*1+lsi)*1]), &(inteval->stack[((hsi*12960+61704)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19440+10080)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
