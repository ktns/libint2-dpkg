#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6976)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+22096)*1+lsi)*1]), &(inteval->stack[((hsi*756+2223)*1+lsi)*1]), &(inteval->stack[((hsi*588+1635)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+23860)*1+lsi)*1]), &(inteval->stack[((hsi*945+2979)*1+lsi)*1]), &(inteval->stack[((hsi*756+2223)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+26128)*1+lsi)*1]), &(inteval->stack[((hsi*2268+23860)*1+lsi)*1]), &(inteval->stack[((hsi*1764+22096)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+22096)*1+lsi)*1]), &(inteval->stack[((hsi*540+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+23356)*1+lsi)*1]), &(inteval->stack[((hsi*675+960)*1+lsi)*1]), &(inteval->stack[((hsi*540+420)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+23356)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22096)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*7560+29656)*1+lsi)*1]), &(inteval->stack[((hsi*3528+26128)*1+lsi)*1]), &(inteval->stack[((hsi*2520+0)*1+lsi)*1]),168);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+22096)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4708)*1+lsi)*1]), &(inteval->stack[((hsi*784+3924)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5716)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4708)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+37216)*1+lsi)*1]), &(inteval->stack[((hsi*3024+0)*1+lsi)*1]), &(inteval->stack[((hsi*2352+22096)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*10584+41920)*1+lsi)*1]), &(inteval->stack[((hsi*4704+37216)*1+lsi)*1]), &(inteval->stack[((hsi*3528+26128)*1+lsi)*1]),168);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*15120+6976)*1+lsi)*1]), &(inteval->stack[((hsi*10584+41920)*1+lsi)*1]), &(inteval->stack[((hsi*7560+29656)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*15120+6976)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
