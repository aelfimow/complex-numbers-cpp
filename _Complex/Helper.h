#ifdef HELPER_H
#error Already included.
#else
#define HELPER_H

#include <string>
#include <complex>
#include <valarray>
#include <quadmath.h>

namespace helper
{
    extern std::string to_string(__float128 const &value, bool precise = false);

    extern std::string to_string(std::complex<__float128> const &value, bool precise = false);

    extern std::string to_string(_Complex float const &value, bool precise = false);
    extern std::string to_string(_Complex double const &value, bool precise = false);
    extern std::string to_string(_Complex long double const &value, bool precise = false);
    extern std::string to_string(__complex128 const &value, bool precise = false);

    float abs(_Complex float const &z);
    std::valarray<float> abs(std::valarray<_Complex float> const &z);
    double abs(_Complex double const &z);
    std::valarray<double> abs(std::valarray<_Complex double> const &z);
    long double abs(_Complex long double const &z);
    __float128 abs(__complex128 const &z);
}

#endif
