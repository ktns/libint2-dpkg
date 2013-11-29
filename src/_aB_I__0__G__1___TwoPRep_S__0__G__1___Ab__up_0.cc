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
#include <_aB_I__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_I__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4060)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+10360)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]), &(inteval->stack[((hsi*588+420)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+12124)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+14476)*1+lsi)*1]), &(inteval->stack[((hsi*2352+12124)*1+lsi)*1]), &(inteval->stack[((hsi*1764+10360)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+18004)*1+lsi)*1]), &(inteval->stack[((hsi*588+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+19264)*1+lsi)*1]), &(inteval->stack[((hsi*1764+10360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18004)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+21784)*1+lsi)*1]), &(inteval->stack[((hsi*3528+14476)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19264)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+18004)*1+lsi)*1]), &(inteval->stack[((hsi*1260+2800)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+25984)*1+lsi)*1]), &(inteval->stack[((hsi*3024+18004)*1+lsi)*1]), &(inteval->stack[((hsi*2352+12124)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+30688)*1+lsi)*1]), &(inteval->stack[((hsi*4704+25984)*1+lsi)*1]), &(inteval->stack[((hsi*3528+14476)*1+lsi)*1]),28);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*6300+4060)*1+lsi)*1]), &(inteval->stack[((hsi*5880+30688)*1+lsi)*1]), &(inteval->stack[((hsi*4200+21784)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6300+4060)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
