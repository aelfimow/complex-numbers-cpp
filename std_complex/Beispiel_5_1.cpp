#include "Beispiel_5_1.h"
#include "Helper.h"

#include <complex>
#include <iostream>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.1
 * \see Book1.md, (Seite 297)
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

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << helper::to_string(z.real()) << ", Im(z) = " << helper::to_string(z.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "z = -3 - 7i" << std::endl;

    // z = -3 - 7i
    // Using: float
    {
        std::complex<float> z = -3.0f - 7.0if;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> z = -3.0 - 7.0i;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> z = -3.0L - 7.0iL;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> z(-3.0Q, -7.0Q);

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << helper::to_string(z.real()) << ", Im(z) = " << helper::to_string(z.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "z = 2i" << std::endl;

    // z = 2i
    // Using: float
    {
        std::complex<float> z = 2.0if;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> z = 2.0i;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> z = 2.0iL;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> z(0.0Q, 2.0Q);

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << helper::to_string(z.real()) << ", Im(z) = " << helper::to_string(z.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "z = 12" << std::endl;

    // z = 12
    // Using: float
    {
        std::complex<float> z = 12.0f;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> z = 12.0;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> z = 12.0L;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> z(12.0Q, 0.0Q);

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << helper::to_string(z.real()) << ", Im(z) = " << helper::to_string(z.imag()) << std::endl;
    }
}
