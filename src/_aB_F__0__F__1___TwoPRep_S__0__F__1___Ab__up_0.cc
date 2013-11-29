#include <libint2.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,740)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+1740)*1+lsi)*1]), &(inteval->stack[((hsi*210+250)*1+lsi)*1]), &(inteval->stack[((hsi*150+100)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2190)*1+lsi)*1]), &(inteval->stack[((hsi*150+100)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+2490)*1+lsi)*1]), &(inteval->stack[((hsi*450+1740)*1+lsi)*1]), &(inteval->stack[((hsi*300+2190)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+3090)*1+lsi)*1]), &(inteval->stack[((hsi*280+460)*1+lsi)*1]), &(inteval->stack[((hsi*210+250)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+3720)*1+lsi)*1]), &(inteval->stack[((hsi*630+3090)*1+lsi)*1]), &(inteval->stack[((hsi*450+1740)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1000+740)*1+lsi)*1]), &(inteval->stack[((hsi*900+3720)*1+lsi)*1]), &(inteval->stack[((hsi*600+2490)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1000+740)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
