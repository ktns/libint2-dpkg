#include <libint2.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_H__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+16024)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2128)*1+lsi)*1]), &(inteval->stack[((hsi*784+1344)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+1344)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+18376)*1+lsi)*1]), &(inteval->stack[((hsi*2352+16024)*1+lsi)*1]), &(inteval->stack[((hsi*1764+1344)*1+lsi)*1]),84);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4144)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3136)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+23668)*1+lsi)*1]), &(inteval->stack[((hsi*3024+0)*1+lsi)*1]), &(inteval->stack[((hsi*2352+16024)*1+lsi)*1]),84);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*10584+5440)*1+lsi)*1]), &(inteval->stack[((hsi*7056+23668)*1+lsi)*1]), &(inteval->stack[((hsi*5292+18376)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10584+5440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
