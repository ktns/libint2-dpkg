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
#include <_aB_G__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+12300)*1+lsi)*1]), &(inteval->stack[((hsi*825+1215)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+14325)*1+lsi)*1]), &(inteval->stack[((hsi*990+2040)*1+lsi)*1]), &(inteval->stack[((hsi*825+1215)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+16800)*1+lsi)*1]), &(inteval->stack[((hsi*2475+14325)*1+lsi)*1]), &(inteval->stack[((hsi*2025+12300)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+20850)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+22470)*1+lsi)*1]), &(inteval->stack[((hsi*2025+12300)*1+lsi)*1]), &(inteval->stack[((hsi*1620+20850)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+25710)*1+lsi)*1]), &(inteval->stack[((hsi*4050+16800)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22470)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+20850)*1+lsi)*1]), &(inteval->stack[((hsi*1170+3030)*1+lsi)*1]), &(inteval->stack[((hsi*990+2040)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+31110)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20850)*1+lsi)*1]), &(inteval->stack[((hsi*2475+14325)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+36060)*1+lsi)*1]), &(inteval->stack[((hsi*4950+31110)*1+lsi)*1]), &(inteval->stack[((hsi*4050+16800)*1+lsi)*1]),15);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*8100+4200)*1+lsi)*1]), &(inteval->stack[((hsi*6750+36060)*1+lsi)*1]), &(inteval->stack[((hsi*5400+25710)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8100+4200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
