#include "Helper.h"

#include <vector>
#include <quadmath.h>

/**
 * \brief Helper to convert __float128 to std::string
 */
std::string helper::to_string(__float128 const &value, bool precise)
{
    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), precise ? "%.36Qe" : "%.3Qe", value);

    std::string const str(buffer.data());

    return str;
}

/**
 * \brief Helper to convert std::complex<__float128> to std::string
 */
std::string helper::to_string(std::complex<__float128> const &value, bool precise)
{
    std::string str { };

    str.append("(");
    str.append(to_string(value.real(), precise));
    str.append(", ");
    str.append(to_string(value.imag(), precise));
    str.append(")");

    return str;
}
