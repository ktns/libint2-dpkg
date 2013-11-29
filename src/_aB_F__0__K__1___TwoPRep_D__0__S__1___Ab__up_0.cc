#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <_aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1656)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+3816)*1+lsi)*1]), &(inteval->stack[((hsi*540+360)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+4896)*1+lsi)*1]), &(inteval->stack[((hsi*756+900)*1+lsi)*1]), &(inteval->stack[((hsi*540+360)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+1656)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1080+3816)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2160+1656)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
