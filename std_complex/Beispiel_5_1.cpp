#include <complex>
#include <iostream>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.1 (p. 297)
 * \see Book1.md
 */
void Beispiel_5_1()
{
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
}
