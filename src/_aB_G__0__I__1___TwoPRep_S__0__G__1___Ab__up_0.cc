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
#include <_aB_G__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__I__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3450)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+9750)*1+lsi)*1]), &(inteval->stack[((hsi*675+960)*1+lsi)*1]), &(inteval->stack[((hsi*540+420)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+11370)*1+lsi)*1]), &(inteval->stack[((hsi*825+1635)*1+lsi)*1]), &(inteval->stack[((hsi*675+960)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+13395)*1+lsi)*1]), &(inteval->stack[((hsi*2025+11370)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9750)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+16635)*1+lsi)*1]), &(inteval->stack[((hsi*540+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+17895)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9750)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16635)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+20415)*1+lsi)*1]), &(inteval->stack[((hsi*3240+13395)*1+lsi)*1]), &(inteval->stack[((hsi*2520+17895)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+16635)*1+lsi)*1]), &(inteval->stack[((hsi*990+2460)*1+lsi)*1]), &(inteval->stack[((hsi*825+1635)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+24615)*1+lsi)*1]), &(inteval->stack[((hsi*2475+16635)*1+lsi)*1]), &(inteval->stack[((hsi*2025+11370)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+28665)*1+lsi)*1]), &(inteval->stack[((hsi*4050+24615)*1+lsi)*1]), &(inteval->stack[((hsi*3240+13395)*1+lsi)*1]),15);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*6300+3450)*1+lsi)*1]), &(inteval->stack[((hsi*5400+28665)*1+lsi)*1]), &(inteval->stack[((hsi*4200+20415)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6300+3450)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
