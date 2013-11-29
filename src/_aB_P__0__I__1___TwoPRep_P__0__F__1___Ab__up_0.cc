#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1476)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3996)*1+lsi)*1]), &(inteval->stack[((hsi*135+192)*1+lsi)*1]), &(inteval->stack[((hsi*108+84)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+4320)*1+lsi)*1]), &(inteval->stack[((hsi*108+84)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+4572)*1+lsi)*1]), &(inteval->stack[((hsi*324+3996)*1+lsi)*1]), &(inteval->stack[((hsi*252+4320)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+5076)*1+lsi)*1]), &(inteval->stack[((hsi*165+327)*1+lsi)*1]), &(inteval->stack[((hsi*135+192)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+5481)*1+lsi)*1]), &(inteval->stack[((hsi*405+5076)*1+lsi)*1]), &(inteval->stack[((hsi*324+3996)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+6129)*1+lsi)*1]), &(inteval->stack[((hsi*648+5481)*1+lsi)*1]), &(inteval->stack[((hsi*504+4572)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+3996)*1+lsi)*1]), &(inteval->stack[((hsi*270+876)*1+lsi)*1]), &(inteval->stack[((hsi*216+660)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+4644)*1+lsi)*1]), &(inteval->stack[((hsi*216+660)*1+lsi)*1]), &(inteval->stack[((hsi*168+492)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+6969)*1+lsi)*1]), &(inteval->stack[((hsi*648+3996)*1+lsi)*1]), &(inteval->stack[((hsi*504+4644)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+4644)*1+lsi)*1]), &(inteval->stack[((hsi*330+1146)*1+lsi)*1]), &(inteval->stack[((hsi*270+876)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*810+4644)*1+lsi)*1]), &(inteval->stack[((hsi*648+3996)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+3996)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6969)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*2520+1476)*1+lsi)*1]), &(inteval->stack[((hsi*1680+3996)*1+lsi)*1]), &(inteval->stack[((hsi*840+6129)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2520+1476)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
