#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_P__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__K__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,606)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+1686)*1+lsi)*1]), &(inteval->stack[((hsi*165+243)*1+lsi)*1]), &(inteval->stack[((hsi*135+108)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2091)*1+lsi)*1]), &(inteval->stack[((hsi*135+108)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+2415)*1+lsi)*1]), &(inteval->stack[((hsi*405+1686)*1+lsi)*1]), &(inteval->stack[((hsi*324+2091)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+3063)*1+lsi)*1]), &(inteval->stack[((hsi*198+408)*1+lsi)*1]), &(inteval->stack[((hsi*165+243)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+3558)*1+lsi)*1]), &(inteval->stack[((hsi*495+3063)*1+lsi)*1]), &(inteval->stack[((hsi*405+1686)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+606)*1+lsi)*1]), &(inteval->stack[((hsi*810+3558)*1+lsi)*1]), &(inteval->stack[((hsi*648+2415)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1080+606)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
