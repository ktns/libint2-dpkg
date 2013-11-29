#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_G__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_G__0__F__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+7164)*1+lsi)*1]), &(inteval->stack[((hsi*315+375)*1+lsi)*1]), &(inteval->stack[((hsi*225+150)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+7839)*1+lsi)*1]), &(inteval->stack[((hsi*225+150)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+8289)*1+lsi)*1]), &(inteval->stack[((hsi*675+7164)*1+lsi)*1]), &(inteval->stack[((hsi*450+7839)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+9189)*1+lsi)*1]), &(inteval->stack[((hsi*420+690)*1+lsi)*1]), &(inteval->stack[((hsi*315+375)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+10134)*1+lsi)*1]), &(inteval->stack[((hsi*945+9189)*1+lsi)*1]), &(inteval->stack[((hsi*675+7164)*1+lsi)*1]),15);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*1500+11484)*1+lsi)*1]), &(inteval->stack[((hsi*1350+10134)*1+lsi)*1]), &(inteval->stack[((hsi*900+8289)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+7164)*1+lsi)*1]), &(inteval->stack[((hsi*441+1635)*1+lsi)*1]), &(inteval->stack[((hsi*315+1320)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+8109)*1+lsi)*1]), &(inteval->stack[((hsi*315+1320)*1+lsi)*1]), &(inteval->stack[((hsi*210+1110)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+8739)*1+lsi)*1]), &(inteval->stack[((hsi*945+7164)*1+lsi)*1]), &(inteval->stack[((hsi*630+8109)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+2076)*1+lsi)*1]), &(inteval->stack[((hsi*441+1635)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+12984)*1+lsi)*1]), &(inteval->stack[((hsi*1323+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+7164)*1+lsi)*1]),21);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+0)*1+lsi)*1]), &(inteval->stack[((hsi*1890+12984)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8739)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4500+2664)*1+lsi)*1]), &(inteval->stack[((hsi*2100+0)*1+lsi)*1]), &(inteval->stack[((hsi*1500+11484)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4500+2664)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
