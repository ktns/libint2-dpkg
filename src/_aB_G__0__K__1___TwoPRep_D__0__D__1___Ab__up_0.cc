#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8704)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+28144)*1+lsi)*1]), &(inteval->stack[((hsi*945+2796)*1+lsi)*1]), &(inteval->stack[((hsi*756+2040)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+30412)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3741)*1+lsi)*1]), &(inteval->stack[((hsi*945+2796)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+33247)*1+lsi)*1]), &(inteval->stack[((hsi*2835+30412)*1+lsi)*1]), &(inteval->stack[((hsi*2268+28144)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+28144)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+29764)*1+lsi)*1]), &(inteval->stack[((hsi*825+1215)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+0)*1+lsi)*1]), &(inteval->stack[((hsi*2025+29764)*1+lsi)*1]), &(inteval->stack[((hsi*1620+28144)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*9720+37783)*1+lsi)*1]), &(inteval->stack[((hsi*4536+33247)*1+lsi)*1]), &(inteval->stack[((hsi*3240+0)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+28144)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4896)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*1540+7164)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5904)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+47503)*1+lsi)*1]), &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*3024+28144)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*13608+53551)*1+lsi)*1]), &(inteval->stack[((hsi*6048+47503)*1+lsi)*1]), &(inteval->stack[((hsi*4536+33247)*1+lsi)*1]),216);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*19440+8704)*1+lsi)*1]), &(inteval->stack[((hsi*13608+53551)*1+lsi)*1]), &(inteval->stack[((hsi*9720+37783)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19440+8704)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
