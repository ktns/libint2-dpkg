#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2254)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+6034)*1+lsi)*1]), &(inteval->stack[((hsi*420+805)*1+lsi)*1]), &(inteval->stack[((hsi*315+490)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+490)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+6979)*1+lsi)*1]), &(inteval->stack[((hsi*945+6034)*1+lsi)*1]), &(inteval->stack[((hsi*630+490)*1+lsi)*1]),63);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+8869)*1+lsi)*1]), &(inteval->stack[((hsi*588+1666)*1+lsi)*1]), &(inteval->stack[((hsi*441+1225)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2835+10192)*1+lsi)*1]), &(inteval->stack[((hsi*1323+8869)*1+lsi)*1]), &(inteval->stack[((hsi*945+6034)*1+lsi)*1]),63);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3780+2254)*1+lsi)*1]), &(inteval->stack[((hsi*2835+10192)*1+lsi)*1]), &(inteval->stack[((hsi*1890+6979)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3780+2254)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
