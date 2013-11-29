#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_D__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_D__0__I__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1984)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+5008)*1+lsi)*1]), &(inteval->stack[((hsi*360+664)*1+lsi)*1]), &(inteval->stack[((hsi*280+384)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+384)*1+lsi)*1]), &(inteval->stack[((hsi*216+168)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+5848)*1+lsi)*1]), &(inteval->stack[((hsi*840+5008)*1+lsi)*1]), &(inteval->stack[((hsi*504+384)*1+lsi)*1]),84);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+7360)*1+lsi)*1]), &(inteval->stack[((hsi*540+1444)*1+lsi)*1]), &(inteval->stack[((hsi*420+1024)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+8620)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7360)*1+lsi)*1]), &(inteval->stack[((hsi*840+5008)*1+lsi)*1]),84);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*3024+1984)*1+lsi)*1]), &(inteval->stack[((hsi*2520+8620)*1+lsi)*1]), &(inteval->stack[((hsi*1512+5848)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3024+1984)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
