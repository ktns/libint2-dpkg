#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_F__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+4440)*1+lsi)*1]), &(inteval->stack[((hsi*450+640)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+5520)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+6360)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4440)*1+lsi)*1]), &(inteval->stack[((hsi*840+5520)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+8040)*1+lsi)*1]), &(inteval->stack[((hsi*550+1090)*1+lsi)*1]), &(inteval->stack[((hsi*450+640)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+9390)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8040)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4440)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+1640)*1+lsi)*1]), &(inteval->stack[((hsi*2160+9390)*1+lsi)*1]), &(inteval->stack[((hsi*1680+6360)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2800+1640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
