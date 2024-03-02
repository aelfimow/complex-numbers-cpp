#include <cmath>
#include <iostream>

#include "Helper.h"

#include <vector>
#include <sstream>
#include <iomanip>

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
 * \brief Helper to convert _Complex float to std::string
 */
std::string helper::to_string(_Complex float const &value, bool precise)
{
    std::ostringstream ss;

    ss << "(";

    if (precise)
    {
        ss << std::setprecision(10) << __real__ value << ", " << __imag__ value;
    }
    else
    {
        ss << __real__ value << ", " << __imag__ value;
    }

    ss << ")";

    return ss.str();
}

/**
 * \brief Helper to convert _Complex double to std::string
 */
std::string helper::to_string(_Complex double const &value, bool precise)
{
    std::ostringstream ss;

    ss << "(";

    if (precise)
    {
        ss << std::setprecision(10) << __real__ value << ", " << __imag__ value;
    }
    else
    {
        ss << __real__ value << ", " << __imag__ value;
    }

    ss << ")";

    return ss.str();
}

/**
 * \brief Helper to convert _Complex long double to std::string
 */
std::string helper::to_string(_Complex long double const &value, bool precise)
{
    std::ostringstream ss;

    ss << "(";

    if (precise)
    {
        ss << std::setprecision(10) << __real__ value << ", " << __imag__ value;
    }
    else
    {
        ss << __real__ value << ", " << __imag__ value;
    }

    ss << ")";

    return ss.str();
}

/**
 * \brief Helper to convert __complex128 to std::string
 */
std::string helper::to_string(__complex128 const &value, bool precise)
{
    std::string str { };

    str.append("(");
    str.append(to_string(__real__ value, precise));
    str.append(", ");
    str.append(to_string(__imag__ value, precise));
    str.append(")");

    return str;
}

/**
 * \brief Computes the magnitude of the complex number
 */
float helper::abs(_Complex float const &z)
{
    float const r2 = ::powf(__real__ z, 2.0f);
    float const i2 = ::powf(__imag__ z, 2.0f);

    float const rho = ::sqrtf(r2 + i2);

    return rho;
}

/**
 * \brief Computes the magnitude of the complex numbers in std::valarray
 */
std::valarray<float> helper::abs(std::valarray<_Complex float> const &z)
{
    std::valarray<float> rhos(z.size());

    for (size_t i = 0U; i < z.size(); ++i)
    {
        rhos[i] = helper::abs(z[i]);
    }

    return rhos;
}

/**
 * \brief Computes the magnitude of the complex number
 */
double helper::abs(_Complex double const &z)
{
    double const r2 = ::pow(__real__ z, 2.0);
    double const i2 = ::pow(__imag__ z, 2.0);

    double const rho = ::sqrt(r2 + i2);

    return rho;
}

/**
 * \brief Computes the magnitude of the complex number
 */
long double helper::abs(_Complex long double const &z)
{
    long double const r2 = ::powl(__real__ z, 2.0);
    long double const i2 = ::powl(__imag__ z, 2.0);

    long double const rho = ::sqrtl(r2 + i2);

    return rho;
}

/**
 * \brief Computes the magnitude of the complex number
 */
__float128 helper::abs(__complex128 const &z)
{
    __float128 const r2 = ::powq(__real__ z, 2.0Q);
    __float128 const i2 = ::powq(__imag__ z, 2.0Q);

    __float128 const rho = ::sqrtq(r2 + i2);

    return rho;
}
