#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_G__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__G__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+10350)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]), &(inteval->stack[((hsi*315+225)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+11295)*1+lsi)*1]), &(inteval->stack[((hsi*315+225)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+11970)*1+lsi)*1]), &(inteval->stack[((hsi*945+10350)*1+lsi)*1]), &(inteval->stack[((hsi*675+11295)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+13320)*1+lsi)*1]), &(inteval->stack[((hsi*540+960)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+14580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13320)*1+lsi)*1]), &(inteval->stack[((hsi*945+10350)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+16470)*1+lsi)*1]), &(inteval->stack[((hsi*1890+14580)*1+lsi)*1]), &(inteval->stack[((hsi*1350+11970)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+10350)*1+lsi)*1]), &(inteval->stack[((hsi*588+2256)*1+lsi)*1]), &(inteval->stack[((hsi*441+1815)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+11673)*1+lsi)*1]), &(inteval->stack[((hsi*441+1815)*1+lsi)*1]), &(inteval->stack[((hsi*315+1500)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+12618)*1+lsi)*1]), &(inteval->stack[((hsi*1323+10350)*1+lsi)*1]), &(inteval->stack[((hsi*945+11673)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+2844)*1+lsi)*1]), &(inteval->stack[((hsi*588+2256)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+18720)*1+lsi)*1]), &(inteval->stack[((hsi*1764+0)*1+lsi)*1]), &(inteval->stack[((hsi*1323+10350)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+0)*1+lsi)*1]), &(inteval->stack[((hsi*2646+18720)*1+lsi)*1]), &(inteval->stack[((hsi*1890+12618)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*6750+3600)*1+lsi)*1]), &(inteval->stack[((hsi*3150+0)*1+lsi)*1]), &(inteval->stack[((hsi*2250+16470)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6750+3600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
