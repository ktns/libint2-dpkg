#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+12500)*1+lsi)*1]), &(inteval->stack[((hsi*450+640)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+13580)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+14420)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12500)*1+lsi)*1]), &(inteval->stack[((hsi*840+13580)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+16100)*1+lsi)*1]), &(inteval->stack[((hsi*550+1090)*1+lsi)*1]), &(inteval->stack[((hsi*450+640)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+17450)*1+lsi)*1]), &(inteval->stack[((hsi*1350+16100)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12500)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+19610)*1+lsi)*1]), &(inteval->stack[((hsi*2160+17450)*1+lsi)*1]), &(inteval->stack[((hsi*1680+14420)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+12500)*1+lsi)*1]), &(inteval->stack[((hsi*675+2600)*1+lsi)*1]), &(inteval->stack[((hsi*540+2060)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+14120)*1+lsi)*1]), &(inteval->stack[((hsi*540+2060)*1+lsi)*1]), &(inteval->stack[((hsi*420+1640)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+15380)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14120)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+3275)*1+lsi)*1]), &(inteval->stack[((hsi*675+2600)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+22410)*1+lsi)*1]), &(inteval->stack[((hsi*2025+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12500)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+25650)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22410)*1+lsi)*1]), &(inteval->stack[((hsi*2520+15380)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*8400+4100)*1+lsi)*1]), &(inteval->stack[((hsi*4200+25650)*1+lsi)*1]), &(inteval->stack[((hsi*2800+19610)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8400+4100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
