
// Test library configuration for std.cfg
//
// Usage:
// $ cppcheck --check-library --enable=information --error-exitcode=1 --suppress=missingIncludeSystem --inline-suppr test/cfg/std.cpp
// =>
// No warnings about bad library configuration, unmatched suppressions, etc. exitcode=0
//

#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <complex>
#include <cassert>
#include <cwchar>
#include <cfenv>
#include <csetjmp>
#include <cmath>

void bufferAccessOutOfBounds(void)
{
    char a[5];
    std::strcpy(a,"abcd");
    // cppcheck-suppress bufferAccessOutOfBounds
    // cppcheck-suppress redundantCopy
    std::strcpy(a, "abcde");
    // cppcheck-suppress redundantCopy
    std::strncpy(a,"abcde",5);
    // cppcheck-suppress bufferAccessOutOfBounds
    // cppcheck-suppress redundantCopy
    std::strncpy(a,"abcde",6);
}

void uninitvar_abs(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::abs(i);
}

void uninitvar_isalnum(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isalnum(i);
}

void uninitvar_isalpha(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isalpha(i);
}

void uninitvar_iscntrl(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::iscntrl(i);
}

void uninitvar_isdigit(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isdigit(i);
}

void uninitvar_isgraph(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isgraph(i);
}

void uninitvar_islower(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::islower(i);
}

void uninitvar_isprint(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isprint(i);
}

void uninitvar_isspace(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isspace(i);
}

void uninitvar_isupper(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isupper(i);
}

void uninitvar_isxdigit(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isxdigit(i);
}

void uninitvar_proj(void)
{
    double d;
    const std::complex<double> dc(d,d);
    // cppcheck-suppress uninitvar
    (void)std::proj(dc);
}

void uninitvar_acos(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::acos(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::acos(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::acos(ld);
}

void uninitvar_acosh(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::acoshf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::acosh(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::acoshl(ld);
}

void uninitvar_asctime(void)
{
    const struct tm *tm;
    // cppcheck-suppress uninitvar
    // cppcheck-suppress obsoleteFunctionsasctime
    (void)std::asctime(tm);
}

void uninitvar_sqrt(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::sqrt(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::sqrt(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::sqrt(ld);
}

void uninitvar_sinh(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::sinh(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::sinh(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::sinh(ld);
}

void uninitvar_sin(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::sin(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::sin(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::sin(ld);
}

void uninitvar_asin(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::asin(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::asin(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::asin(ld);
}

void uninitvar_asinh(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::asinhf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::asinh(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::asinhl(ld);
}

void uninitvar_wcsftime(wchar_t* ptr)
{
    size_t maxsize;
    wchar_t* format;
    struct tm* timeptr;
    // cppcheck-suppress uninitvar
    (void)std::wcsftime(ptr, maxsize, format, timeptr);
}

void uninitvar_tan(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::tan(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::tan(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::tan(ld);
}

void uninitvar_tanh(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::tanh(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::tanh(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::tanh(ld);
}

void uninitvar_atan(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::atan(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::atan(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::atan(ld);
}

void uninitvar_tgamma(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::tgammaf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::tgamma(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::tgammal(ld);
}

void uninitvar_trunc(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::truncf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::trunc(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::truncl(ld);
}

void uninitvar_atanh(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::atanhf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::atanh(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::atanhl(ld);
}

void uninitvar_atan2(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::atan2(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::atan2(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::atan2(ld1,ld2);
}

void uninitvar_atol(void)
{
    char * c;
    // cppcheck-suppress uninitvar
    (void)std::atoi(c);

    // cppcheck-suppress uninitvar
    (void)std::atol(c);

    // cppcheck-suppress uninitvar
    (void)std::atoll(c);
}

void uninitvar_ceil(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::ceil(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::ceil(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::ceil(ld);
}

void uninitvar_copysign(void)
{
    float f1, f2;
    // cppcheck-suppress uninitvar
    (void)std::copysignf(f1, f2);

    double d1, d2;
    // cppcheck-suppress uninitvar
    (void)std::copysign(d1, d2);

    long double ld1, ld2;
    // cppcheck-suppress uninitvar
    (void)std::copysignl(ld1, ld2);
}

void uninitvar_cbrt(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::cbrtf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::cbrt(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::cbrtl(ld);
}

void uninitvar_cos(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::cos(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::cos(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::cos(ld);
}

void uninitvar_clearerr(void)
{
    FILE * stream;
    // cppcheck-suppress uninitvar
    std::clearerr(stream);
}

void uninitvar_cosh(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::cosh(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::cosh(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::cosh(ld);
}

void uninitvar_feraiseexcept(void)
{
    int excepts;
    // cppcheck-suppress uninitvar
    (void)std::feraiseexcept(excepts);
}

void uninitvar_fesetexceptflag(fexcept_t* flagp)
{
    int excepts;
    // cppcheck-suppress uninitvar
    (void)std::fesetexceptflag(flagp, excepts);
}

void uninitvar_feclearexcept(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::feclearexcept(i);
}

void uninitvar_fesetenv(void)
{
    fenv_t* envp;
    // cppcheck-suppress uninitvar
    (void)std::fesetenv(envp);
}

void uninitvar_fesetround(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::fesetround(i);
}

void uninitvar_fetestexcept(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::fetestexcept(i);
}

void uninitvar_feupdateenv(void)
{
    fenv_t* envp;
    // cppcheck-suppress uninitvar
    (void)std::feupdateenv(envp);
}

void uninitvar_ctime(void)
{
    time_t *tp;
    // cppcheck-suppress uninitvar
    (void)std::ctime(tp);
}

void uninitvar_difftime(void)
{
    time_t t1,t2;
    // cppcheck-suppress uninitvar
    (void)std::difftime(t1, t2);
}

void uninitvar_div(void)
{
    int num;
    int denom;
    // cppcheck-suppress uninitvar
    (void)std::div(num,denom);
}

void uninitvar_exit(void)
{
    int i;
    // cppcheck-suppress uninitvar
    std::exit(i);
}

void uninitvar_erf(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::erff(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::erf(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::erfl(ld);
}

void uninitvar_erfc(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::erfcf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::erfc(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::erfcl(ld);
}

void uninitvar_exp(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::exp(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::exp(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::exp(ld);
}

void uninitvar_exp2(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::exp2f(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::exp2(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::exp2l(ld);
}

void uninitvar_expm1(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::expm1f(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::expm1(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::expm1l(ld);
}

void uninitvar_fabs(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::fabs(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::fabs(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::fabs(ld);
}

void uninitvar_fdim(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::fdimf(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::fdim(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::fdiml(ld1,ld2);
}

void uninitvar_fclose(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fclose(stream);
}

void uninitvar_ferror(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::ferror(stream);
}

void uninitvar_feof(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::feof(stream);
}

void uninitvar_fflush(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fflush(stream);
}

void uninitvar_fgetc(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fgetc(stream);
}

void uninitvar_fgetwc(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fgetwc(stream);
}

void uninitvar_fgetpos(void)
{
    FILE* stream;
    fpos_t *ptr;
    // cppcheck-suppress uninitvar
    (void)std::fgetpos(stream,ptr);
}

void uninitvar_floor(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::floor(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::floor(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::floor(ld);
}

void uninitvar_fma(void)
{
    // cppcheck-suppress unassignedVariable
    float f1,f2,f3;
    // cppcheck-suppress uninitvar
    (void)std::fmaf(f1,f2,f3);

    // cppcheck-suppress unassignedVariable
    double d1,d2,d3;
    // cppcheck-suppress uninitvar
    (void)std::fma(d1,d2,d3);

    // cppcheck-suppress unassignedVariable
    long double ld1,ld2,ld3;
    // cppcheck-suppress uninitvar
    (void)std::fmal(ld1,ld2,ld3);
}

void uninitvar_fmax(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::fmaxf(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::fmax(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::fmaxl(ld1,ld2);
}

void uninitvar_fmin(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::fminf(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::fmin(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::fminl(ld1,ld2);
}

void uninitvar_fmod(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::fmod(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::fmod(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::fmod(ld1,ld2);
}

void uninitar_fopen(void)
{
    char *filename;
    char *mode;
    // cppcheck-suppress uninitvar
    FILE * fp = std::fopen(filename, mode);
    fclose(fp);
}

void uninitar_fprintf(void)
{
    FILE *stream;
    char *format;
    int argument;
    // cppcheck-suppress uninitvar
    (void)std::fprintf(stream, format, argument);
}

void uninitar_vfprintf(void)
{
    FILE *stream;
    char *format;
    va_list arg;
    // cppcheck-suppress va_list_usedBeforeStarted
    // cppcheck-suppress uninitvar
    (void)std::vfprintf(stream, format, arg);
}

void uninitar_vfwprintf(void)
{
    FILE *stream;
    wchar_t *format;
    va_list arg;
    // cppcheck-suppress va_list_usedBeforeStarted
    // cppcheck-suppress uninitvar
    (void)std::vfwprintf(stream, format, arg);
}

void uninitvar_fputc(void)
{
    int c;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fputc(c,stream);
}

void uninitvar_fputwc(void)
{
    wchar_t c;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fputwc(c,stream);
}

void uninitvar_fputs(void)
{
    char *string;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fputs(string,stream);
}

void uninitvar_fputws(void)
{
    wchar_t *string;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fputws(string,stream);
}

void uninitvar_fread(void)
{
    void *ptr;
    size_t size;
    size_t nobj;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fread(ptr,size,nobj,stream);
}

void uninitvar_free(void)
{
    // cppcheck-suppress unassignedVariable
    void *block;
    // cppcheck-suppress uninitvar
    std::free(block);
}

void uninitvar_freopen(void)
{
    char *filename;
    char *mode;
    FILE *stream;
    // cppcheck-suppress uninitvar
    FILE * p = std::freopen(filename,mode,stream);
    free(p);
}

void uninitvar_frexp(void)
{
    float f1;
    int *i1;
    // cppcheck-suppress uninitvar
    (void)std::frexp(f1,i1);

    double d1;
    int *i2;
    // cppcheck-suppress uninitvar
    (void)std::frexp(d1,i2);

    long double ld1;
    int *i3;
    // cppcheck-suppress uninitvar
    (void)std::frexp(ld1,i3);
}

void uninitvar_hypot(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::hypotf(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::hypot(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::hypotl(ld1,ld2);
}

void uninitvar_fscanf(void)
{
    FILE *stream;
    char *format;
    int i;
    // cppcheck-suppress uninitvar
    (void)std::fscanf(stream,format,i);
}

void uninitvar_vfscanf(void)
{
    FILE *stream;
    char *format;
    va_list arg;
    // cppcheck-suppress va_list_usedBeforeStarted
    // cppcheck-suppress uninitvar
    (void)std::vfscanf(stream,format,arg);
}

void uninitvar_vfwscanf(void)
{
    FILE *stream;
    wchar_t *format;
    va_list arg;
    // cppcheck-suppress va_list_usedBeforeStarted
    // cppcheck-suppress uninitvar
    (void)std::vfwscanf(stream,format,arg);
}

void uninitvar_fseek(void)
{
    FILE* stream;
    long int offset;
    int origin;
    // cppcheck-suppress uninitvar
    (void)std::fseek(stream,offset,origin);
}

void uninitvar_fsetpos(void)
{
    FILE* stream;
    fpos_t *ptr;
    // cppcheck-suppress uninitvar
    (void)std::fsetpos(stream,ptr);
}

void uninitvar_fgets(void)
{
    char *buffer;
    int n;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fgets(buffer,n,stream);
}

void uninitvar_fgetws(void)
{
    wchar_t *buffer;
    int n;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fgetws(buffer,n,stream);
}

void uninitvar_ftell(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::ftell(stream);
}

void uninitvar_fwide(void)
{
    FILE *stream;
    int mode;
    // cppcheck-suppress uninitvar
    (void)std::fwide(stream,mode);
}

void uninitvar_fwrite(void)
{
    void *ptr;
    size_t size;
    size_t nobj;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::fwrite(ptr,size,nobj,stream);
}

void uninitvar_mblen(void)
{
    char *string;
    size_t size;
    // cppcheck-suppress uninitvar
    (void)std::mblen(string,size);
}

void uninitvar_mbtowc(void)
{
    wchar_t* pwc;
    char* pmb;
    size_t max;
    // cppcheck-suppress uninitvar
    (void)std::mbtowc(pwc,pmb,max);
}

void uninitvar_mbrlen(const char* p, size_t m, mbstate_t* s)
{
    char* pmb;
    size_t max;
    mbstate_t* ps;
    // cppcheck-suppress uninitvar
    (void)std::mbrlen(pmb,max,ps);
    // cppcheck-suppress uninitvar
    (void)std::mbrlen(pmb,m,s);
    // cppcheck-suppress uninitvar
    (void)std::mbrlen(p,max,s);
    // cppcheck-suppress uninitvar
    (void)std::mbrlen(p,m,ps);
    // no warning is expected
    (void)std::mbrlen(p,m,s);
}

void uninitvar_btowc(void)
{
    int c;
    // cppcheck-suppress uninitvar
    (void)std::btowc(c);
}

void uninitvar_mbsinit(void)
{
    mbstate_t* ps;
    // cppcheck-suppress uninitvar
    (void)std::mbsinit(ps);
}

void uninitvar_mbstowcs(void)
{
    wchar_t *ws;
    char *s;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::mbstowcs(ws,s,n);
}

void uninitvar_mbsrtowcs(void)
{
    wchar_t* dest;
    const char* src;
    size_t max;
    mbstate_t* ps;
    // cppcheck-suppress uninitvar
    (void)std::mbsrtowcs(dest,&src,max,ps);
}

void uninitvar_wctob(void)
{
    wint_t wc;
    // cppcheck-suppress uninitvar
    (void)std::wctob(wc);
}

void uninitvar_wctomb(void)
{
    char *s;
    wchar_t wc;
    // cppcheck-suppress uninitvar
    (void)std::wctomb(s,wc);
}

void uninitvar_wcstombs(void)
{
    char *mbstr;
    wchar_t *wcstr;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::wcstombs(mbstr,wcstr,n);
}

void uninitvar_getc(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::getc(stream);
}

void uninitvar_getwc(void)
{
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::getwc(stream);
}

void uninitvar_ungetc(void)
{
    int c;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::ungetc(c,stream);
}

void uninitvar_ungetwc(void)
{
    wint_t c;
    FILE *stream;
    // cppcheck-suppress uninitvar
    (void)std::ungetwc(c,stream);
}

void uninitvar_getenv(void)
{
    char *name;
    // cppcheck-suppress uninitvar
    (void)std::getenv(name);
}

void uninitvar_gmtime(void)
{
    time_t *tp;
    // cppcheck-suppress uninitvar
    (void)std::gmtime(tp);
}

void uninitvar_iswalnum(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswalnum(i);
}

void uninitvar_iswalpha(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswalpha(i);
}

void uninitvar_isblank(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::isblank(i);
}

void uninitvar_iswblank(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswblank(i);
}

void uninitvar_iswcntrl(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswcntrl(i);
}

void uninitvar_iswctype(void)
{
    wint_t c;
    wctype_t desc;
    // cppcheck-suppress uninitvar
    (void)std::iswctype(c,desc);
}

void uninitvar_iswdigit(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswdigit(i);
}

void uninitvar_iswgraph(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswgraph(i);
}

void uninitvar_iswlower(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswlower(i);
}

void uninitvar_iswprint(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswprint(i);
}

void uninitvar_ispunct(void)
{
    int i;
    // cppcheck-suppress uninitvar
    (void)std::ispunct(i);
}

void uninitvar_iswpunct(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswpunct(i);
}

void uninitvar_iswspace(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswspace(i);
}

void uninitvar_iswupper(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswupper(i);
}

void uninitvar_iswxdigit(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::iswxdigit(i);
}

void uninitvar_towctrans(void)
{
    wint_t c;
    wctrans_t desc;
    // cppcheck-suppress uninitvar
    (void)std::towctrans(c,desc);
}

void uninitvar_towlower(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::towlower(i);
}

void uninitvar_towupper(void)
{
    wint_t i;
    // cppcheck-suppress uninitvar
    (void)std::towupper(i);
}

void uninitvar_wctrans(void)
{
    char* property;
    // cppcheck-suppress uninitvar
    (void)std::wctrans(property);
}

void uninitvar_wctype(void)
{
    char* property;
    // cppcheck-suppress uninitvar
    (void)std::wctype(property);
}

void uninitvar_labs(void)
{
    long int li;
    // cppcheck-suppress uninitvar
    (void)std::labs(li);

    long long int lli;
    // cppcheck-suppress uninitvar
    (void)std::llabs(lli);
}

void uninitvar_ldexp(void)
{
    float fd;
    int e1;
    // cppcheck-suppress uninitvar
    (void)std::ldexp(fd,e1);

    double dc;
    int e2;
    // cppcheck-suppress uninitvar
    (void)std::ldexp(dc,e2);

    long double ldc;
    int e3;
    // cppcheck-suppress uninitvar
    (void)std::ldexp(ldc,e3);
}

void uninitvar_lgamma(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::lgammaf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::lgamma(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::lgammal(ld);
}

void uninitvar_rint(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::rintf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::rint(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::rintl(ld);
}

void uninitvar_lrint(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::lrintf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::lrint(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::lrintl(ld);
}

void uninitvar_llrint(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::llrintf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::llrint(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::llrintl(ld);
}

void uninitvar_lround(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::lroundf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::lround(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::lroundl(ld);
}

void uninitvar_llround(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::llroundf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::llround(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::llroundl(ld);
}

void uninitvar_srand(void)
{
    unsigned int seed;
    // cppcheck-suppress uninitvar
    (void)std::srand(seed);
}

void uninitvar_ldiv(void)
{
    long int l1;
    long int l2;
    // cppcheck-suppress uninitvar
    (void)std::ldiv(l1,l2);

    long long int ll1;
    long long int ll2;
    // cppcheck-suppress uninitvar
    (void)std::lldiv(ll1,ll2);
}

void uninitvar_localtime(void)
{
    time_t *tp;
    // cppcheck-suppress uninitvar
    (void)std::localtime(tp);
}

void uninitvar_log(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::log(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::log(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::log(ld);
}

void uninitvar_fpclassify(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::fpclassify(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::fpclassify(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::fpclassify(ld);
}

void uninitvar_isfinite(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::isfinite(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::isfinite(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::isfinite(ld);
}

void uninitvar_isgreater(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::isgreater(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::isgreater(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::isgreater(ld1,ld2);
}

void uninitvar_isgreaterequal(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::isgreaterequal(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::isgreaterequal(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::isgreaterequal(ld1,ld2);
}

void uninitvar_isinf(void)
{
    double d;
    // cppcheck-suppress uninitvar
    (void)std::isinf(d);
}

void uninitvar_logb(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::logbf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::logb(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::logbl(ld);
}

void uninitvar_isless(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::isless(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::isless(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::isless(ld1,ld2);
}

void uninitvar_islessequal(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::islessequal(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::islessequal(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::islessequal(ld1,ld2);
}

void uninitvar_islessgreater(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::islessgreater(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::islessgreater(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::islessgreater(ld1,ld2);
}

void uninitvar_nan(void)
{
    char *tagp;
    // cppcheck-suppress uninitvar
    (void)std::nanf(tagp);
    // cppcheck-suppress uninitvar
    (void)std::nan(tagp);
    // cppcheck-suppress uninitvar
    (void)std::nanl(tagp);
}

void uninitvar_isnan(void)
{
    double d;
    // cppcheck-suppress uninitvar
    (void)std::isnan(d);
}

void uninitvar_isnormal(void)
{
    double d;
    // cppcheck-suppress uninitvar
    (void)std::isnormal(d);
}

void uninitvar_isunordered(void)
{
    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::isunordered(d1,d2);
}

void uninitvar_ilogb(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::ilogb(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::ilogb(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::ilogb(ld);
}

void uninitvar_log10(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::log10(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::log10(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::log10(ld);
}

void uninitvar_log1p(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::log1pf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::log1p(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::log1pl(ld);
}

void uninitvar_log2(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::log2f(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::log2(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::log2l(ld);
}

void uninitvar_nearbyint(void)
{
    float f;
    // cppcheck-suppress uninitvar
    (void)std::nearbyintf(f);

    double d;
    // cppcheck-suppress uninitvar
    (void)std::nearbyint(d);

    long double ld;
    // cppcheck-suppress uninitvar
    (void)std::nearbyintl(ld);
}

void uninitvar_nextafter(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::nextafterf(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::nextafter(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::nextafterl(ld1,ld2);
}

void uninitvar_nexttoward(void)
{
    float f1,f2;
    // cppcheck-suppress uninitvar
    (void)std::nexttowardf(f1,f2);

    double d1,d2;
    // cppcheck-suppress uninitvar
    (void)std::nexttoward(d1,d2);

    long double ld1,ld2;
    // cppcheck-suppress uninitvar
    (void)std::nexttowardl(ld1,ld2);
}

void uninitvar_longjmp(void)
{
    jmp_buf env;
    int val;
    // cppcheck-suppress uninitvar
    (void)std::longjmp(env,val);
}

void uninitvar_malloc(void)
{
    size_t size;
    // cppcheck-suppress uninitvar
    int *p = (int*)std::malloc(size);
    free(p);
}

void uninitvar_memchr(void)
{
    void *cs;
    int c;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::memchr(cs,c,n);
}

void uninitvar_wmemchr(void)
{
    wchar_t *cs;
    wchar_t c;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::wmemchr(cs,c,n);
}

void uninitvar_memcmp(void)
{
    void *s1;
    void *s2;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::memcmp(s1,s2,n);
}

void uninitvar_memcpy(void)
{
    void *ct;
    void *cs;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::memcpy(ct,cs,n);
}

void uninitvar_wmemcpy(void)
{
    wchar_t *cs;
    wchar_t *c;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::wmemcpy(cs,c,n);
}

void uninitvar_memmove(void)
{
    void *ct;
    void *cs;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::memmove(ct,cs,n);
}

void uninitvar_wmemmove(void)
{
    wchar_t *cs;
    wchar_t *c;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::wmemmove(cs,c,n);
}

void uninitvar_memset(void)
{
    void *s;
    int c;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::memset(s,c,n);
}

void uninitvar_wmemset(void)
{
    wchar_t *cs;
    wchar_t  c;
    size_t n;
    // cppcheck-suppress uninitvar
    (void)std::wmemset(cs,c,n);
}

void uninitvar_mktime(void)
{
    struct tm *tp;
    // cppcheck-suppress uninitvar
    (void)std::mktime(tp);
}

void uninivar_modf(void)
{
    float f1;
    float *f2;
    // cppcheck-suppress uninitvar
    (void)std::modf(f1,f2);

    double d1;
    double *d2;
    // cppcheck-suppress uninitvar
    (void)std::modf(d1,d2);

    long double ld1;
    long double *ld2;
    // cppcheck-suppress uninitvar
    (void)std::modf(ld1,ld2);
}

void uninivar_perror(void)
{
    char *string;
    // cppcheck-suppress uninitvar
    (void)std::perror(string);
}