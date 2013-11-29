#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4216)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+11992)*1+lsi)*1]), &(inteval->stack[((hsi*450+1176)*1+lsi)*1]), &(inteval->stack[((hsi*360+816)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+13072)*1+lsi)*1]), &(inteval->stack[((hsi*550+1626)*1+lsi)*1]), &(inteval->stack[((hsi*450+1176)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+14422)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13072)*1+lsi)*1]), &(inteval->stack[((hsi*1080+11992)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+11992)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+12640)*1+lsi)*1]), &(inteval->stack[((hsi*330+486)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*810+12640)*1+lsi)*1]), &(inteval->stack[((hsi*648+11992)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*3888+16582)*1+lsi)*1]), &(inteval->stack[((hsi*2160+14422)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+11992)*1+lsi)*1]), &(inteval->stack[((hsi*675+2716)*1+lsi)*1]), &(inteval->stack[((hsi*540+2176)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+3391)*1+lsi)*1]), &(inteval->stack[((hsi*675+2716)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+20470)*1+lsi)*1]), &(inteval->stack[((hsi*2025+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11992)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*6480+23710)*1+lsi)*1]), &(inteval->stack[((hsi*3240+20470)*1+lsi)*1]), &(inteval->stack[((hsi*2160+14422)*1+lsi)*1]),216);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*7776+4216)*1+lsi)*1]), &(inteval->stack[((hsi*6480+23710)*1+lsi)*1]), &(inteval->stack[((hsi*3888+16582)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7776+4216)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
