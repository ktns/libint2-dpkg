#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_H__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__G__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3136)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+8806)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+9751)*1+lsi)*1]), &(inteval->stack[((hsi*588+756)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+11074)*1+lsi)*1]), &(inteval->stack[((hsi*1323+9751)*1+lsi)*1]), &(inteval->stack[((hsi*945+8806)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+8806)*1+lsi)*1]), &(inteval->stack[((hsi*588+1764)*1+lsi)*1]), &(inteval->stack[((hsi*420+1344)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+0)*1+lsi)*1]), &(inteval->stack[((hsi*784+2352)*1+lsi)*1]), &(inteval->stack[((hsi*588+1764)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+12964)*1+lsi)*1]), &(inteval->stack[((hsi*1764+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8806)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5670+3136)*1+lsi)*1]), &(inteval->stack[((hsi*2520+12964)*1+lsi)*1]), &(inteval->stack[((hsi*1890+11074)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5670+3136)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
