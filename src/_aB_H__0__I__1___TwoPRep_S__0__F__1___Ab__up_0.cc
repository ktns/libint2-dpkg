#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3444)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+9324)*1+lsi)*1]), &(inteval->stack[((hsi*945+1344)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+11592)*1+lsi)*1]), &(inteval->stack[((hsi*756+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+13356)*1+lsi)*1]), &(inteval->stack[((hsi*2268+9324)*1+lsi)*1]), &(inteval->stack[((hsi*1764+11592)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+16884)*1+lsi)*1]), &(inteval->stack[((hsi*1155+2289)*1+lsi)*1]), &(inteval->stack[((hsi*945+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+19719)*1+lsi)*1]), &(inteval->stack[((hsi*2835+16884)*1+lsi)*1]), &(inteval->stack[((hsi*2268+9324)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+3444)*1+lsi)*1]), &(inteval->stack[((hsi*4536+19719)*1+lsi)*1]), &(inteval->stack[((hsi*3528+13356)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5880+3444)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
