#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_I__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+18200)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1792)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+21224)*1+lsi)*1]), &(inteval->stack[((hsi*1540+3052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+25004)*1+lsi)*1]), &(inteval->stack[((hsi*3780+21224)*1+lsi)*1]), &(inteval->stack[((hsi*3024+18200)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+31052)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+33404)*1+lsi)*1]), &(inteval->stack[((hsi*3024+18200)*1+lsi)*1]), &(inteval->stack[((hsi*2352+31052)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+38108)*1+lsi)*1]), &(inteval->stack[((hsi*6048+25004)*1+lsi)*1]), &(inteval->stack[((hsi*4704+33404)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+31052)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4592)*1+lsi)*1]), &(inteval->stack[((hsi*1540+3052)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+45948)*1+lsi)*1]), &(inteval->stack[((hsi*4620+31052)*1+lsi)*1]), &(inteval->stack[((hsi*3780+21224)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+53508)*1+lsi)*1]), &(inteval->stack[((hsi*7560+45948)*1+lsi)*1]), &(inteval->stack[((hsi*6048+25004)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+6440)*1+lsi)*1]), &(inteval->stack[((hsi*10080+53508)*1+lsi)*1]), &(inteval->stack[((hsi*7840+38108)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11760+6440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
