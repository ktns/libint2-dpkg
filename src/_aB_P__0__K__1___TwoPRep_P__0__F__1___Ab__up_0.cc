#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_P__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1818)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+5058)*1+lsi)*1]), &(inteval->stack[((hsi*165+243)*1+lsi)*1]), &(inteval->stack[((hsi*135+108)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+5463)*1+lsi)*1]), &(inteval->stack[((hsi*135+108)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+5787)*1+lsi)*1]), &(inteval->stack[((hsi*405+5058)*1+lsi)*1]), &(inteval->stack[((hsi*324+5463)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+6435)*1+lsi)*1]), &(inteval->stack[((hsi*198+408)*1+lsi)*1]), &(inteval->stack[((hsi*165+243)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+6930)*1+lsi)*1]), &(inteval->stack[((hsi*495+6435)*1+lsi)*1]), &(inteval->stack[((hsi*405+5058)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+7740)*1+lsi)*1]), &(inteval->stack[((hsi*810+6930)*1+lsi)*1]), &(inteval->stack[((hsi*648+5787)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+5058)*1+lsi)*1]), &(inteval->stack[((hsi*330+1092)*1+lsi)*1]), &(inteval->stack[((hsi*270+822)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+5868)*1+lsi)*1]), &(inteval->stack[((hsi*270+822)*1+lsi)*1]), &(inteval->stack[((hsi*216+606)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+8820)*1+lsi)*1]), &(inteval->stack[((hsi*810+5058)*1+lsi)*1]), &(inteval->stack[((hsi*648+5868)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+5868)*1+lsi)*1]), &(inteval->stack[((hsi*396+1422)*1+lsi)*1]), &(inteval->stack[((hsi*330+1092)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*990+5868)*1+lsi)*1]), &(inteval->stack[((hsi*810+5058)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+5058)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8820)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*3240+1818)*1+lsi)*1]), &(inteval->stack[((hsi*2160+5058)*1+lsi)*1]), &(inteval->stack[((hsi*1080+7740)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3240+1818)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
