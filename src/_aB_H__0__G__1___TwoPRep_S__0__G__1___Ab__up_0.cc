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
#include <_aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3045)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+7770)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+9093)*1+lsi)*1]), &(inteval->stack[((hsi*756+1344)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+10857)*1+lsi)*1]), &(inteval->stack[((hsi*1764+9093)*1+lsi)*1]), &(inteval->stack[((hsi*1323+7770)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+13503)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+14448)*1+lsi)*1]), &(inteval->stack[((hsi*1323+7770)*1+lsi)*1]), &(inteval->stack[((hsi*945+13503)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+16338)*1+lsi)*1]), &(inteval->stack[((hsi*2646+10857)*1+lsi)*1]), &(inteval->stack[((hsi*1890+14448)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+13503)*1+lsi)*1]), &(inteval->stack[((hsi*945+2100)*1+lsi)*1]), &(inteval->stack[((hsi*756+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+19488)*1+lsi)*1]), &(inteval->stack[((hsi*2268+13503)*1+lsi)*1]), &(inteval->stack[((hsi*1764+9093)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+23016)*1+lsi)*1]), &(inteval->stack[((hsi*3528+19488)*1+lsi)*1]), &(inteval->stack[((hsi*2646+10857)*1+lsi)*1]),21);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*4725+3045)*1+lsi)*1]), &(inteval->stack[((hsi*4410+23016)*1+lsi)*1]), &(inteval->stack[((hsi*3150+16338)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4725+3045)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
