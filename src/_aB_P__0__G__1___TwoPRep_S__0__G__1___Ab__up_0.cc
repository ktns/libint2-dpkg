#include <libint2.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gg.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,435)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1110)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]), &(inteval->stack[((hsi*63+45)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+1299)*1+lsi)*1]), &(inteval->stack[((hsi*108+192)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+1551)*1+lsi)*1]), &(inteval->stack[((hsi*252+1299)*1+lsi)*1]), &(inteval->stack[((hsi*189+1110)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1929)*1+lsi)*1]), &(inteval->stack[((hsi*63+45)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+2064)*1+lsi)*1]), &(inteval->stack[((hsi*189+1110)*1+lsi)*1]), &(inteval->stack[((hsi*135+1929)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+2334)*1+lsi)*1]), &(inteval->stack[((hsi*378+1551)*1+lsi)*1]), &(inteval->stack[((hsi*270+2064)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+1929)*1+lsi)*1]), &(inteval->stack[((hsi*135+300)*1+lsi)*1]), &(inteval->stack[((hsi*108+192)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+2784)*1+lsi)*1]), &(inteval->stack[((hsi*324+1929)*1+lsi)*1]), &(inteval->stack[((hsi*252+1299)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+3288)*1+lsi)*1]), &(inteval->stack[((hsi*504+2784)*1+lsi)*1]), &(inteval->stack[((hsi*378+1551)*1+lsi)*1]),3);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*675+435)*1+lsi)*1]), &(inteval->stack[((hsi*630+3288)*1+lsi)*1]), &(inteval->stack[((hsi*450+2334)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*675+435)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
