#include <libint2.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gg.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,870)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+2220)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+2598)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+3102)*1+lsi)*1]), &(inteval->stack[((hsi*504+2598)*1+lsi)*1]), &(inteval->stack[((hsi*378+2220)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+3858)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+4128)*1+lsi)*1]), &(inteval->stack[((hsi*378+2220)*1+lsi)*1]), &(inteval->stack[((hsi*270+3858)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+4668)*1+lsi)*1]), &(inteval->stack[((hsi*756+3102)*1+lsi)*1]), &(inteval->stack[((hsi*540+4128)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+3858)*1+lsi)*1]), &(inteval->stack[((hsi*270+600)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+5568)*1+lsi)*1]), &(inteval->stack[((hsi*648+3858)*1+lsi)*1]), &(inteval->stack[((hsi*504+2598)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+6576)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5568)*1+lsi)*1]), &(inteval->stack[((hsi*756+3102)*1+lsi)*1]),6);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*1350+870)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6576)*1+lsi)*1]), &(inteval->stack[((hsi*900+4668)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1350+870)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
