#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_I__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_I__0__G__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+19000)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]), &(inteval->stack[((hsi*588+420)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+20764)*1+lsi)*1]), &(inteval->stack[((hsi*588+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+22024)*1+lsi)*1]), &(inteval->stack[((hsi*1764+19000)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20764)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+24544)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]), &(inteval->stack[((hsi*784+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+26896)*1+lsi)*1]), &(inteval->stack[((hsi*2352+24544)*1+lsi)*1]), &(inteval->stack[((hsi*1764+19000)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+30424)*1+lsi)*1]), &(inteval->stack[((hsi*3528+26896)*1+lsi)*1]), &(inteval->stack[((hsi*2520+22024)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+19000)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4096)*1+lsi)*1]), &(inteval->stack[((hsi*756+3340)*1+lsi)*1]),36);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+21268)*1+lsi)*1]), &(inteval->stack[((hsi*756+3340)*1+lsi)*1]), &(inteval->stack[((hsi*540+2800)*1+lsi)*1]),36);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+22888)*1+lsi)*1]), &(inteval->stack[((hsi*2268+19000)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21268)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+26128)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5104)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4096)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+0)*1+lsi)*1]), &(inteval->stack[((hsi*3024+26128)*1+lsi)*1]), &(inteval->stack[((hsi*2268+19000)*1+lsi)*1]),36);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*5400+34624)*1+lsi)*1]), &(inteval->stack[((hsi*4536+0)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22888)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*12600+6400)*1+lsi)*1]), &(inteval->stack[((hsi*5400+34624)*1+lsi)*1]), &(inteval->stack[((hsi*4200+30424)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12600+6400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
