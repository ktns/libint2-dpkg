#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_D__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__H__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+3628)*1+lsi)*1]), &(inteval->stack[((hsi*168+126)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+4006)*1+lsi)*1]), &(inteval->stack[((hsi*216+294)*1+lsi)*1]), &(inteval->stack[((hsi*168+126)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+4510)*1+lsi)*1]), &(inteval->stack[((hsi*504+4006)*1+lsi)*1]), &(inteval->stack[((hsi*378+3628)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+3628)*1+lsi)*1]), &(inteval->stack[((hsi*280+720)*1+lsi)*1]), &(inteval->stack[((hsi*210+510)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+5266)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*280+720)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*840+5266)*1+lsi)*1]), &(inteval->stack[((hsi*630+3628)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*2268+1360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+4510)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2268+1360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
