#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+5280)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+6900)*1+lsi)*1]), &(inteval->stack[((hsi*825+1215)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+2040)*1+lsi)*1]), &(inteval->stack[((hsi*2025+6900)*1+lsi)*1]), &(inteval->stack[((hsi*1620+5280)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3240+2040)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
