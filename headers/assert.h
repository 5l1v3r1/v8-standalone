/**
 * Suggestions taken from http://www.gnu.org/software/m68hc11/examples/assert_8h-source.html
 * (the GNU assert.h header)
 */
#ifndef __V8SA_ASSERT_H__
#define __V8SA_ASSERT_H__

#ifdef NDEBUG
#define assert(x)
#else
#define assert(x) (void)((x) || (__assert(#x, __FILE__, __LINE__), 0));
#endif

#ifdef __cplusplus
extern "C" {
#endif

void __assert(const char * msg, const char * file, int line);

#ifdef __cplusplus
}
#endif

#endif
