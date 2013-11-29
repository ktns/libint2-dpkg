#include <libint2.h>
#include <libint2_iface.h>
#include <libint2_iface_internal.h>
#include <cstddef>
#include <cassert>
#include <cstdlib>
#ifdef __cplusplus
extern "C" {
#endif
size_t libint2_need_memory_default(int max_am) {
assert(max_am <= 0);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_default > LIBINT2_MAX_HRR_LSRANK_0_default ? LIBINT2_MAX_HRR_HSRANK_0_default : LIBINT2_MAX_HRR_LSRANK_0_default);
return 0; // unreachable
}
size_t libint2_need_memory_eri(int max_am) {
assert(max_am <= 7);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_eri > LIBINT2_MAX_HRR_LSRANK_0_eri ? LIBINT2_MAX_HRR_HSRANK_0_eri : LIBINT2_MAX_HRR_LSRANK_0_eri);
assert(max_am <= 7);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_eri > LIBINT2_MAX_HRR_LSRANK_1_eri ? LIBINT2_MAX_HRR_HSRANK_1_eri : LIBINT2_MAX_HRR_LSRANK_1_eri);
assert(max_am <= 7);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_eri > LIBINT2_MAX_HRR_LSRANK_2_eri ? LIBINT2_MAX_HRR_HSRANK_2_eri : LIBINT2_MAX_HRR_LSRANK_2_eri);
assert(max_am <= 7);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_eri > LIBINT2_MAX_HRR_LSRANK_3_eri ? LIBINT2_MAX_HRR_HSRANK_3_eri : LIBINT2_MAX_HRR_LSRANK_3_eri);
assert(max_am <= 7);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_eri > LIBINT2_MAX_HRR_LSRANK_4_eri ? LIBINT2_MAX_HRR_HSRANK_4_eri : LIBINT2_MAX_HRR_LSRANK_4_eri);
assert(max_am <= 7);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_eri > LIBINT2_MAX_HRR_LSRANK_5_eri ? LIBINT2_MAX_HRR_HSRANK_5_eri : LIBINT2_MAX_HRR_LSRANK_5_eri);
assert(max_am <= 7);
if (max_am == 6) return LIBINT2_MAX_STACK_SIZE_6_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_6_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_6_eri > LIBINT2_MAX_HRR_LSRANK_6_eri ? LIBINT2_MAX_HRR_HSRANK_6_eri : LIBINT2_MAX_HRR_LSRANK_6_eri);
assert(max_am <= 7);
if (max_am == 7) return LIBINT2_MAX_STACK_SIZE_7_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_7_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_7_eri > LIBINT2_MAX_HRR_LSRANK_7_eri ? LIBINT2_MAX_HRR_HSRANK_7_eri : LIBINT2_MAX_HRR_LSRANK_7_eri);
return 0; // unreachable
}
void libint2_init_default(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
#ifndef HAVE_POSIX_MEMALIGN
inteval->stack = new LIBINT2_REALTYPE[libint2_need_memory_default(max_am)];
#elif (LIBINT2_ALIGN_SIZE == 0)
inteval->stack = new LIBINT2_REALTYPE[libint2_need_memory_default(max_am)];
#else
posix_memalign(reinterpret_cast<void**>(&inteval->stack), LIBINT2_ALIGN_SIZE*sizeof(LIBINT2_REALTYPE), libint2_need_memory_default(max_am)*sizeof(LIBINT2_REALTYPE));
#endif
assert(max_am <= 0);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN;
}
void libint2_init_eri(Libint_t* inteval, int max_am, void* buf) {
if (buf != 0) inteval->stack = reinterpret_cast<LIBINT2_REALTYPE*>(buf);
else 
#ifndef HAVE_POSIX_MEMALIGN
inteval->stack = new LIBINT2_REALTYPE[libint2_need_memory_eri(max_am)];
#elif (LIBINT2_ALIGN_SIZE == 0)
inteval->stack = new LIBINT2_REALTYPE[libint2_need_memory_eri(max_am)];
#else
posix_memalign(reinterpret_cast<void**>(&inteval->stack), LIBINT2_ALIGN_SIZE*sizeof(LIBINT2_REALTYPE), libint2_need_memory_eri(max_am)*sizeof(LIBINT2_REALTYPE));
#endif
assert(max_am <= 7);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 6)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_6_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 7);
if (max_am == 7)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_7_eri * LIBINT2_MAX_VECLEN;
}
void libint2_cleanup_default(Libint_t* inteval) {
#ifndef HAVE_POSIX_MEMALIGN
delete[] inteval->stack;
#elif (LIBINT2_ALIGN_SIZE == 0)
delete[] inteval->stack;
#else
free(inteval->stack);
#endif
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_eri(Libint_t* inteval) {
#ifndef HAVE_POSIX_MEMALIGN
delete[] inteval->stack;
#elif (LIBINT2_ALIGN_SIZE == 0)
delete[] inteval->stack;
#else
free(inteval->stack);
#endif
inteval->stack = 0;
inteval->vstack = 0;
}
#ifdef __cplusplus
};
#endif


