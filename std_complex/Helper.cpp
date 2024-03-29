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

/**
 * \brief Convert value from radians to degree
 */
double helper::to_degree(double value)
{
    double const pi = 3.1415926535897932384626433832795;

    double const degree = ((180.0 * value) / pi);

    return degree;
}

/**
 * \brief Convert value from radians to degree
 */
long double helper::to_degree(long double value)
{
    long double const pi = 3.1415926535897932384626433832795L;

    long double const degree = ((180.0L * value) / pi);

    return degree;
}

/**
 * \brief Convert value from radians to degree
 */
__float128 helper::to_degree(__float128 value)
{
    __float128 const degree = ((180.0Q * value) / M_PIq);

    return degree;
}

/**
 * \brief Compute the phase angle of complex number z
 */
__float128 helper::arg(std::complex<__float128> const &z)
{
    __float128 const phi = ::atan2q(z.imag(), z.real());

    return phi;
}
