#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__H__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3250)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+9550)*1+lsi)*1]), &(inteval->stack[((hsi*360+490)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+10390)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+11020)*1+lsi)*1]), &(inteval->stack[((hsi*840+9550)*1+lsi)*1]), &(inteval->stack[((hsi*630+10390)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+12280)*1+lsi)*1]), &(inteval->stack[((hsi*450+850)*1+lsi)*1]), &(inteval->stack[((hsi*360+490)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+13360)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12280)*1+lsi)*1]), &(inteval->stack[((hsi*840+9550)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+15040)*1+lsi)*1]), &(inteval->stack[((hsi*1680+13360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11020)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+9550)*1+lsi)*1]), &(inteval->stack[((hsi*540+2035)*1+lsi)*1]), &(inteval->stack[((hsi*420+1615)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+10810)*1+lsi)*1]), &(inteval->stack[((hsi*420+1615)*1+lsi)*1]), &(inteval->stack[((hsi*315+1300)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+11755)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9550)*1+lsi)*1]), &(inteval->stack[((hsi*945+10810)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+2575)*1+lsi)*1]), &(inteval->stack[((hsi*540+2035)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+17140)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9550)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+0)*1+lsi)*1]), &(inteval->stack[((hsi*2520+17140)*1+lsi)*1]), &(inteval->stack[((hsi*1890+11755)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*6300+3250)*1+lsi)*1]), &(inteval->stack[((hsi*3150+0)*1+lsi)*1]), &(inteval->stack[((hsi*2100+15040)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6300+3250)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
