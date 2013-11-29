#include <libint2.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18496)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+65152)*1+lsi)*1]), &(inteval->stack[((hsi*2025+6516)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4896)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+70012)*1+lsi)*1]), &(inteval->stack[((hsi*2475+8541)*1+lsi)*1]), &(inteval->stack[((hsi*2025+6516)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+76087)*1+lsi)*1]), &(inteval->stack[((hsi*6075+70012)*1+lsi)*1]), &(inteval->stack[((hsi*4860+65152)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+65152)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+69040)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+0)*1+lsi)*1]), &(inteval->stack[((hsi*4860+69040)*1+lsi)*1]), &(inteval->stack[((hsi*3888+65152)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*23328+85807)*1+lsi)*1]), &(inteval->stack[((hsi*9720+76087)*1+lsi)*1]), &(inteval->stack[((hsi*7776+0)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+12996)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11016)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+65152)*1+lsi)*1]), &(inteval->stack[((hsi*3025+15471)*1+lsi)*1]), &(inteval->stack[((hsi*2475+12996)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+5940)*1+lsi)*1]), &(inteval->stack[((hsi*7425+65152)*1+lsi)*1]), &(inteval->stack[((hsi*5940+0)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*29160+109135)*1+lsi)*1]), &(inteval->stack[((hsi*11880+5940)*1+lsi)*1]), &(inteval->stack[((hsi*9720+76087)*1+lsi)*1]),216);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*46656+18496)*1+lsi)*1]), &(inteval->stack[((hsi*29160+109135)*1+lsi)*1]), &(inteval->stack[((hsi*23328+85807)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*46656+18496)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
