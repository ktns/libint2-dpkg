#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_P__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__F__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,414)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+954)*1+lsi)*1]), &(inteval->stack[((hsi*45+30)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1044)*1+lsi)*1]), &(inteval->stack[((hsi*63+75)*1+lsi)*1]), &(inteval->stack[((hsi*45+30)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1179)*1+lsi)*1]), &(inteval->stack[((hsi*135+1044)*1+lsi)*1]), &(inteval->stack[((hsi*90+954)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+954)*1+lsi)*1]), &(inteval->stack[((hsi*90+198)*1+lsi)*1]), &(inteval->stack[((hsi*60+138)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1359)*1+lsi)*1]), &(inteval->stack[((hsi*126+288)*1+lsi)*1]), &(inteval->stack[((hsi*90+198)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+1359)*1+lsi)*1]), &(inteval->stack[((hsi*180+954)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*540+414)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*180+1179)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+414)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
