#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_F__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+8200)*1+lsi)*1]), &(inteval->stack[((hsi*550+810)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+9550)*1+lsi)*1]), &(inteval->stack[((hsi*660+1360)*1+lsi)*1]), &(inteval->stack[((hsi*550+810)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+11200)*1+lsi)*1]), &(inteval->stack[((hsi*1650+9550)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8200)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+13900)*1+lsi)*1]), &(inteval->stack[((hsi*450+360)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+14980)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8200)*1+lsi)*1]), &(inteval->stack[((hsi*1080+13900)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+17140)*1+lsi)*1]), &(inteval->stack[((hsi*2700+11200)*1+lsi)*1]), &(inteval->stack[((hsi*2160+14980)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+13900)*1+lsi)*1]), &(inteval->stack[((hsi*780+2020)*1+lsi)*1]), &(inteval->stack[((hsi*660+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+20740)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13900)*1+lsi)*1]), &(inteval->stack[((hsi*1650+9550)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+24040)*1+lsi)*1]), &(inteval->stack[((hsi*3300+20740)*1+lsi)*1]), &(inteval->stack[((hsi*2700+11200)*1+lsi)*1]),10);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*5400+2800)*1+lsi)*1]), &(inteval->stack[((hsi*4500+24040)*1+lsi)*1]), &(inteval->stack[((hsi*3600+17140)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5400+2800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
