#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_G__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5184)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+14904)*1+lsi)*1]), &(inteval->stack[((hsi*945+1971)*1+lsi)*1]), &(inteval->stack[((hsi*756+1215)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+1215)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+17172)*1+lsi)*1]), &(inteval->stack[((hsi*2268+14904)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1215)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+22032)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3924)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+25056)*1+lsi)*1]), &(inteval->stack[((hsi*3024+22032)*1+lsi)*1]), &(inteval->stack[((hsi*2268+14904)*1+lsi)*1]),108);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*9720+5184)*1+lsi)*1]), &(inteval->stack[((hsi*6804+25056)*1+lsi)*1]), &(inteval->stack[((hsi*4860+17172)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9720+5184)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
