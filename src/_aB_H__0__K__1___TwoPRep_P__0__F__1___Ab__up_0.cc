#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_H__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9898)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+32578)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1701)*1+lsi)*1]), &(inteval->stack[((hsi*945+756)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+35413)*1+lsi)*1]), &(inteval->stack[((hsi*945+756)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+37681)*1+lsi)*1]), &(inteval->stack[((hsi*2835+32578)*1+lsi)*1]), &(inteval->stack[((hsi*2268+35413)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+42217)*1+lsi)*1]), &(inteval->stack[((hsi*1386+2856)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1701)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+45682)*1+lsi)*1]), &(inteval->stack[((hsi*3465+42217)*1+lsi)*1]), &(inteval->stack[((hsi*2835+32578)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+51352)*1+lsi)*1]), &(inteval->stack[((hsi*5670+45682)*1+lsi)*1]), &(inteval->stack[((hsi*4536+37681)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+32578)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6510)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5250)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+36358)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5250)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4242)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+39382)*1+lsi)*1]), &(inteval->stack[((hsi*3780+32578)*1+lsi)*1]), &(inteval->stack[((hsi*3024+36358)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1848+8050)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6510)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+58912)*1+lsi)*1]), &(inteval->stack[((hsi*4620+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+32578)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+66472)*1+lsi)*1]), &(inteval->stack[((hsi*7560+58912)*1+lsi)*1]), &(inteval->stack[((hsi*6048+39382)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*22680+9898)*1+lsi)*1]), &(inteval->stack[((hsi*10080+66472)*1+lsi)*1]), &(inteval->stack[((hsi*7560+51352)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*22680+9898)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
