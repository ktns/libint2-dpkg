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
#include <_aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1450)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+3700)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]), &(inteval->stack[((hsi*210+150)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+4330)*1+lsi)*1]), &(inteval->stack[((hsi*360+640)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+5170)*1+lsi)*1]), &(inteval->stack[((hsi*840+4330)*1+lsi)*1]), &(inteval->stack[((hsi*630+3700)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+6430)*1+lsi)*1]), &(inteval->stack[((hsi*210+150)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+6880)*1+lsi)*1]), &(inteval->stack[((hsi*630+3700)*1+lsi)*1]), &(inteval->stack[((hsi*450+6430)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+7780)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5170)*1+lsi)*1]), &(inteval->stack[((hsi*900+6880)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+6430)*1+lsi)*1]), &(inteval->stack[((hsi*450+1000)*1+lsi)*1]), &(inteval->stack[((hsi*360+640)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+9280)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6430)*1+lsi)*1]), &(inteval->stack[((hsi*840+4330)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+10960)*1+lsi)*1]), &(inteval->stack[((hsi*1680+9280)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5170)*1+lsi)*1]),10);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*2250+1450)*1+lsi)*1]), &(inteval->stack[((hsi*2100+10960)*1+lsi)*1]), &(inteval->stack[((hsi*1500+7780)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2250+1450)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
