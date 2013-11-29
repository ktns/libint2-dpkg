#include <libint2.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,64)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+154)*1+lsi)*1]), &(inteval->stack[((hsi*21+15)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+199)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+15)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+64)*1+lsi)*1]), &(inteval->stack[((hsi*63+199)*1+lsi)*1]), &(inteval->stack[((hsi*45+154)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+64)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
