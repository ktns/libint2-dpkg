#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,130)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+340)*1+lsi)*1]), &(inteval->stack[((hsi*36+49)*1+lsi)*1]), &(inteval->stack[((hsi*28+21)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+424)*1+lsi)*1]), &(inteval->stack[((hsi*28+21)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+487)*1+lsi)*1]), &(inteval->stack[((hsi*84+340)*1+lsi)*1]), &(inteval->stack[((hsi*63+424)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+613)*1+lsi)*1]), &(inteval->stack[((hsi*45+85)*1+lsi)*1]), &(inteval->stack[((hsi*36+49)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+721)*1+lsi)*1]), &(inteval->stack[((hsi*108+613)*1+lsi)*1]), &(inteval->stack[((hsi*84+340)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+130)*1+lsi)*1]), &(inteval->stack[((hsi*168+721)*1+lsi)*1]), &(inteval->stack[((hsi*126+487)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*210+130)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
