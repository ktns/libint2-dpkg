#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3910)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+11470)*1+lsi)*1]), &(inteval->stack[((hsi*420+1165)*1+lsi)*1]), &(inteval->stack[((hsi*315+850)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+12415)*1+lsi)*1]), &(inteval->stack[((hsi*540+1585)*1+lsi)*1]), &(inteval->stack[((hsi*420+1165)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+13675)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12415)*1+lsi)*1]), &(inteval->stack[((hsi*945+11470)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+11470)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+12100)*1+lsi)*1]), &(inteval->stack[((hsi*360+490)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*840+12100)*1+lsi)*1]), &(inteval->stack[((hsi*630+11470)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3780+15565)*1+lsi)*1]), &(inteval->stack[((hsi*1890+13675)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]),126);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+11470)*1+lsi)*1]), &(inteval->stack[((hsi*588+2566)*1+lsi)*1]), &(inteval->stack[((hsi*441+2125)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+3154)*1+lsi)*1]), &(inteval->stack[((hsi*588+2566)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+19345)*1+lsi)*1]), &(inteval->stack[((hsi*1764+0)*1+lsi)*1]), &(inteval->stack[((hsi*1323+11470)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*5670+21991)*1+lsi)*1]), &(inteval->stack[((hsi*2646+19345)*1+lsi)*1]), &(inteval->stack[((hsi*1890+13675)*1+lsi)*1]),126);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*7560+3910)*1+lsi)*1]), &(inteval->stack[((hsi*5670+21991)*1+lsi)*1]), &(inteval->stack[((hsi*3780+15565)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7560+3910)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
