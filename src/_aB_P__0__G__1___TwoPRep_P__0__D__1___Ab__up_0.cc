#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_P__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__G__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,576)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1386)*1+lsi)*1]), &(inteval->stack[((hsi*63+45)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1521)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]), &(inteval->stack[((hsi*63+45)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1710)*1+lsi)*1]), &(inteval->stack[((hsi*189+1521)*1+lsi)*1]), &(inteval->stack[((hsi*135+1386)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1386)*1+lsi)*1]), &(inteval->stack[((hsi*126+282)*1+lsi)*1]), &(inteval->stack[((hsi*90+192)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+1980)*1+lsi)*1]), &(inteval->stack[((hsi*168+408)*1+lsi)*1]), &(inteval->stack[((hsi*126+282)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*378+1980)*1+lsi)*1]), &(inteval->stack[((hsi*270+1386)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*810+576)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+1710)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*810+576)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
