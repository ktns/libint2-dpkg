#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2944)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+7984)*1+lsi)*1]), &(inteval->stack[((hsi*540+1060)*1+lsi)*1]), &(inteval->stack[((hsi*420+640)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+640)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+9244)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7984)*1+lsi)*1]), &(inteval->stack[((hsi*840+640)*1+lsi)*1]),84);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+11764)*1+lsi)*1]), &(inteval->stack[((hsi*756+2188)*1+lsi)*1]), &(inteval->stack[((hsi*588+1600)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3780+13528)*1+lsi)*1]), &(inteval->stack[((hsi*1764+11764)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7984)*1+lsi)*1]),84);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*5040+2944)*1+lsi)*1]), &(inteval->stack[((hsi*3780+13528)*1+lsi)*1]), &(inteval->stack[((hsi*2520+9244)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5040+2944)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
