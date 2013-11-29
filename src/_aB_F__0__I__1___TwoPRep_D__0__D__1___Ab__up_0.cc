#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5014)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+15094)*1+lsi)*1]), &(inteval->stack[((hsi*540+1510)*1+lsi)*1]), &(inteval->stack[((hsi*420+1090)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+16354)*1+lsi)*1]), &(inteval->stack[((hsi*675+2050)*1+lsi)*1]), &(inteval->stack[((hsi*540+1510)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+17974)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16354)*1+lsi)*1]), &(inteval->stack[((hsi*1260+15094)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+15094)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+15934)*1+lsi)*1]), &(inteval->stack[((hsi*450+640)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+0)*1+lsi)*1]), &(inteval->stack[((hsi*1080+15934)*1+lsi)*1]), &(inteval->stack[((hsi*840+15094)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*5040+20494)*1+lsi)*1]), &(inteval->stack[((hsi*2520+17974)*1+lsi)*1]), &(inteval->stack[((hsi*1680+0)*1+lsi)*1]),168);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+15094)*1+lsi)*1]), &(inteval->stack[((hsi*756+3313)*1+lsi)*1]), &(inteval->stack[((hsi*588+2725)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+4069)*1+lsi)*1]), &(inteval->stack[((hsi*756+3313)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+25534)*1+lsi)*1]), &(inteval->stack[((hsi*2268+0)*1+lsi)*1]), &(inteval->stack[((hsi*1764+15094)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*7560+29062)*1+lsi)*1]), &(inteval->stack[((hsi*3528+25534)*1+lsi)*1]), &(inteval->stack[((hsi*2520+17974)*1+lsi)*1]),168);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*10080+5014)*1+lsi)*1]), &(inteval->stack[((hsi*7560+29062)*1+lsi)*1]), &(inteval->stack[((hsi*5040+20494)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10080+5014)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
