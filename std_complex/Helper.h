#ifdef HELPER_H
#error Already included.
#else
#define HELPER_H

#include <string>
#include <complex>

namespace helper
{
    extern std::string to_string(__float128 const &value, bool precise = false);

    extern std::string to_string(std::complex<__float128> const &value, bool precise = false);

    extern float to_degree(float value);
    extern double to_degree(double value);
    extern long double to_degree(long double value);
    extern __float128 to_degree(__float128 value);

    extern __float128 arg(std::complex<__float128> const &z);
}

#endif
