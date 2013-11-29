#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6256)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+19216)*1+lsi)*1]), &(inteval->stack[((hsi*675+1900)*1+lsi)*1]), &(inteval->stack[((hsi*540+1360)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+20836)*1+lsi)*1]), &(inteval->stack[((hsi*825+2575)*1+lsi)*1]), &(inteval->stack[((hsi*675+1900)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+22861)*1+lsi)*1]), &(inteval->stack[((hsi*2025+20836)*1+lsi)*1]), &(inteval->stack[((hsi*1620+19216)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+19216)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+20296)*1+lsi)*1]), &(inteval->stack[((hsi*550+810)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+0)*1+lsi)*1]), &(inteval->stack[((hsi*1350+20296)*1+lsi)*1]), &(inteval->stack[((hsi*1080+19216)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*6480+26101)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22861)*1+lsi)*1]), &(inteval->stack[((hsi*2160+0)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+19216)*1+lsi)*1]), &(inteval->stack[((hsi*945+4156)*1+lsi)*1]), &(inteval->stack[((hsi*756+3400)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+0)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5101)*1+lsi)*1]), &(inteval->stack[((hsi*945+4156)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+32581)*1+lsi)*1]), &(inteval->stack[((hsi*2835+0)*1+lsi)*1]), &(inteval->stack[((hsi*2268+19216)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*9720+37117)*1+lsi)*1]), &(inteval->stack[((hsi*4536+32581)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22861)*1+lsi)*1]),216);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*12960+6256)*1+lsi)*1]), &(inteval->stack[((hsi*9720+37117)*1+lsi)*1]), &(inteval->stack[((hsi*6480+26101)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12960+6256)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
