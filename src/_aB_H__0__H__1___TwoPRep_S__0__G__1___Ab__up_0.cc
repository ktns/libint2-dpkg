#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3885)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+10500)*1+lsi)*1]), &(inteval->stack[((hsi*756+1029)*1+lsi)*1]), &(inteval->stack[((hsi*588+441)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+12264)*1+lsi)*1]), &(inteval->stack[((hsi*945+1785)*1+lsi)*1]), &(inteval->stack[((hsi*756+1029)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+14532)*1+lsi)*1]), &(inteval->stack[((hsi*2268+12264)*1+lsi)*1]), &(inteval->stack[((hsi*1764+10500)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+18060)*1+lsi)*1]), &(inteval->stack[((hsi*588+441)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+19383)*1+lsi)*1]), &(inteval->stack[((hsi*1764+10500)*1+lsi)*1]), &(inteval->stack[((hsi*1323+18060)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+22029)*1+lsi)*1]), &(inteval->stack[((hsi*3528+14532)*1+lsi)*1]), &(inteval->stack[((hsi*2646+19383)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+18060)*1+lsi)*1]), &(inteval->stack[((hsi*1155+2730)*1+lsi)*1]), &(inteval->stack[((hsi*945+1785)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+26439)*1+lsi)*1]), &(inteval->stack[((hsi*2835+18060)*1+lsi)*1]), &(inteval->stack[((hsi*2268+12264)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+30975)*1+lsi)*1]), &(inteval->stack[((hsi*4536+26439)*1+lsi)*1]), &(inteval->stack[((hsi*3528+14532)*1+lsi)*1]),21);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*6615+3885)*1+lsi)*1]), &(inteval->stack[((hsi*5880+30975)*1+lsi)*1]), &(inteval->stack[((hsi*4410+22029)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6615+3885)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
