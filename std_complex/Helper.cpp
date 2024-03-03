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

/**
 * \brief Convert value from radians to degree
 */
float helper::to_degree(float value)
{
    float const pi = 3.1415926535897932384626433832795f;

    float const degree = ((180.0f * value) / pi);

    return degree;
}
