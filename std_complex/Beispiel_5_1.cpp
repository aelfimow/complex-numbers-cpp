#include <complex>
#include <iostream>
#include <string>
#include <vector>
#include <quadmath.h>

using namespace std::complex_literals;

namespace
{
    /**
     * \brief Helper to convert __float128 to std::string
     */
    std::string to_string(__float128 const &value)
    {
        std::vector<char> buffer(256U);

        ::quadmath_snprintf(buffer.data(), buffer.size(), "%.3Qe", value);

        std::string const str(buffer.data());

        return str;
    }

    /**
     * \brief Helper to convert std::complex<__float128> to std::string
     */
    std::string to_string(std::complex<__float128> const &value)
    {
        std::string str { };

        str.append("(");
        str.append(to_string(value.real()));
        str.append(",");
        str.append(to_string(value.imag()));
        str.append(")");

        return str;
    }
}

/**
 * \brief Beispiel 5.1 (p. 297)
 * \see Book1.md
 */
void Beispiel_5_1()
{
    std::cout << std::endl;
    std::cout << "z = 3 + 7i" << std::endl;

    // z = 3 + 7i
    // Using: float
    {
        std::complex<float> z = 3.0f + 7.0if;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> z = 3.0 + 7.0i;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> z = 3.0L + 7.0iL;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> z(3.0Q, 7.0Q);

        std::cout << to_string(z) << std::endl;
        std::cout << "Re(z) = " << to_string(z.real()) << ", Im(z) = " << to_string(z.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "z = -3 - 7i" << std::endl;

    // z = -3 - 7i
    // Using: float
    {
        std::complex<float> z = -3.0f + -7.0if;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> z = -3.0 + -7.0i;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> z = -3.0L + -7.0iL;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> z(-3.0Q, -7.0Q);

        std::cout << to_string(z) << std::endl;
        std::cout << "Re(z) = " << to_string(z.real()) << ", Im(z) = " << to_string(z.imag()) << std::endl;
    }
}
