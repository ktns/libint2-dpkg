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
#include <_aB_I__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_I__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+22960)*1+lsi)*1]), &(inteval->stack[((hsi*1540+2268)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+26740)*1+lsi)*1]), &(inteval->stack[((hsi*1848+3808)*1+lsi)*1]), &(inteval->stack[((hsi*1540+2268)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+31360)*1+lsi)*1]), &(inteval->stack[((hsi*4620+26740)*1+lsi)*1]), &(inteval->stack[((hsi*3780+22960)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+38920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+41944)*1+lsi)*1]), &(inteval->stack[((hsi*3780+22960)*1+lsi)*1]), &(inteval->stack[((hsi*3024+38920)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+47992)*1+lsi)*1]), &(inteval->stack[((hsi*7560+31360)*1+lsi)*1]), &(inteval->stack[((hsi*6048+41944)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+38920)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5656)*1+lsi)*1]), &(inteval->stack[((hsi*1848+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+58072)*1+lsi)*1]), &(inteval->stack[((hsi*5544+38920)*1+lsi)*1]), &(inteval->stack[((hsi*4620+26740)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+67312)*1+lsi)*1]), &(inteval->stack[((hsi*9240+58072)*1+lsi)*1]), &(inteval->stack[((hsi*7560+31360)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+7840)*1+lsi)*1]), &(inteval->stack[((hsi*12600+67312)*1+lsi)*1]), &(inteval->stack[((hsi*10080+47992)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*15120+7840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
