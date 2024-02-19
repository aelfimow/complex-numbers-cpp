#include "Helper.h"

#include <vector>
#include <sstream>
#include <iomanip>
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
