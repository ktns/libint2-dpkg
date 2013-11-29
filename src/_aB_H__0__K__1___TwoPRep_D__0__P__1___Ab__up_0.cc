#include <libint2.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_H__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6885)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+20493)*1+lsi)*1]), &(inteval->stack[((hsi*1260+2709)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1701)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+1701)*1+lsi)*1]), &(inteval->stack[((hsi*945+756)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+23517)*1+lsi)*1]), &(inteval->stack[((hsi*3024+20493)*1+lsi)*1]), &(inteval->stack[((hsi*2268+1701)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+5265)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3969)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+30321)*1+lsi)*1]), &(inteval->stack[((hsi*3888+0)*1+lsi)*1]), &(inteval->stack[((hsi*3024+20493)*1+lsi)*1]),108);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*13608+6885)*1+lsi)*1]), &(inteval->stack[((hsi*9072+30321)*1+lsi)*1]), &(inteval->stack[((hsi*6804+23517)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*13608+6885)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
