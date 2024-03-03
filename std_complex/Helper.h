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

    float to_degree(float value);
    double to_degree(double value);
}

#endif
