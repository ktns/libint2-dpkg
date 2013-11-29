#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+14350)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+15673)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+16618)*1+lsi)*1]), &(inteval->stack[((hsi*1323+14350)*1+lsi)*1]), &(inteval->stack[((hsi*945+15673)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+18508)*1+lsi)*1]), &(inteval->stack[((hsi*756+1344)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+20272)*1+lsi)*1]), &(inteval->stack[((hsi*1764+18508)*1+lsi)*1]), &(inteval->stack[((hsi*1323+14350)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+22918)*1+lsi)*1]), &(inteval->stack[((hsi*2646+20272)*1+lsi)*1]), &(inteval->stack[((hsi*1890+16618)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+14350)*1+lsi)*1]), &(inteval->stack[((hsi*784+3108)*1+lsi)*1]), &(inteval->stack[((hsi*588+2520)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+16114)*1+lsi)*1]), &(inteval->stack[((hsi*588+2520)*1+lsi)*1]), &(inteval->stack[((hsi*420+2100)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+17374)*1+lsi)*1]), &(inteval->stack[((hsi*1764+14350)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16114)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3892)*1+lsi)*1]), &(inteval->stack[((hsi*784+3108)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+26068)*1+lsi)*1]), &(inteval->stack[((hsi*2352+0)*1+lsi)*1]), &(inteval->stack[((hsi*1764+14350)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+0)*1+lsi)*1]), &(inteval->stack[((hsi*3528+26068)*1+lsi)*1]), &(inteval->stack[((hsi*2520+17374)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*9450+4900)*1+lsi)*1]), &(inteval->stack[((hsi*4200+0)*1+lsi)*1]), &(inteval->stack[((hsi*3150+22918)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9450+4900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
