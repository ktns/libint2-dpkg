#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+4300)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+4678)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+4948)*1+lsi)*1]), &(inteval->stack[((hsi*378+4300)*1+lsi)*1]), &(inteval->stack[((hsi*270+4678)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+5488)*1+lsi)*1]), &(inteval->stack[((hsi*216+384)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+5992)*1+lsi)*1]), &(inteval->stack[((hsi*504+5488)*1+lsi)*1]), &(inteval->stack[((hsi*378+4300)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+6748)*1+lsi)*1]), &(inteval->stack[((hsi*756+5992)*1+lsi)*1]), &(inteval->stack[((hsi*540+4948)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+4300)*1+lsi)*1]), &(inteval->stack[((hsi*280+960)*1+lsi)*1]), &(inteval->stack[((hsi*210+750)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+4930)*1+lsi)*1]), &(inteval->stack[((hsi*210+750)*1+lsi)*1]), &(inteval->stack[((hsi*150+600)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+5380)*1+lsi)*1]), &(inteval->stack[((hsi*630+4300)*1+lsi)*1]), &(inteval->stack[((hsi*450+4930)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+1240)*1+lsi)*1]), &(inteval->stack[((hsi*280+960)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+7648)*1+lsi)*1]), &(inteval->stack[((hsi*840+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+4300)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7648)*1+lsi)*1]), &(inteval->stack[((hsi*900+5380)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*2700+1600)*1+lsi)*1]), &(inteval->stack[((hsi*1500+0)*1+lsi)*1]), &(inteval->stack[((hsi*900+6748)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2700+1600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
