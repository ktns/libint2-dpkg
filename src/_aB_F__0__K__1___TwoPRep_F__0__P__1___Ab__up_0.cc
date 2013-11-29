#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5994)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+16794)*1+lsi)*1]), &(inteval->stack[((hsi*675+1350)*1+lsi)*1]), &(inteval->stack[((hsi*540+810)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+18414)*1+lsi)*1]), &(inteval->stack[((hsi*945+2781)*1+lsi)*1]), &(inteval->stack[((hsi*756+2025)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4860+20682)*1+lsi)*1]), &(inteval->stack[((hsi*2268+18414)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16794)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+810)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+25542)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16794)*1+lsi)*1]), &(inteval->stack[((hsi*1080+810)*1+lsi)*1]),108);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*6480+28782)*1+lsi)*1]), &(inteval->stack[((hsi*4860+20682)*1+lsi)*1]), &(inteval->stack[((hsi*3240+25542)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4734)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3726)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+35262)*1+lsi)*1]), &(inteval->stack[((hsi*3024+0)*1+lsi)*1]), &(inteval->stack[((hsi*2268+18414)*1+lsi)*1]),108);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*9720+42066)*1+lsi)*1]), &(inteval->stack[((hsi*6804+35262)*1+lsi)*1]), &(inteval->stack[((hsi*4860+20682)*1+lsi)*1]),108);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*10800+5994)*1+lsi)*1]), &(inteval->stack[((hsi*9720+42066)*1+lsi)*1]), &(inteval->stack[((hsi*6480+28782)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10800+5994)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
