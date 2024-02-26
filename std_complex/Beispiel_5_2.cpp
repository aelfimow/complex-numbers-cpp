#include "Beispiel_5_2.h"
#include "Helper.h"

#include <complex>
#include <iostream>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.2
 * \see Book1.md, (Seite 297)
 */
void Beispiel_5_2()
{
    std::cout << std::endl;
    std::cout << "conjugate: z = 3 - 4i" << std::endl;

    // z = 3 - 4i
    // Using: float
    {
        std::complex<float> const z = 3.0f - 4.0if;
        std::complex<float> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> const z = 3.0 - 4.0i;
        std::complex<double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> const z = 3.0L - 4.0iL;
        std::complex<long double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> const z(3.0Q, -4.0Q);
        std::complex<__float128> const cz = std::conj(z);

        std::cout << helper::to_string(cz) << std::endl;
        std::cout << "Re(cz) = " << helper::to_string(cz.real()) << ", Im(cz) = " << helper::to_string(cz.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "conjugate: z = 3 + 4i" << std::endl;

    // z = 3 + 4i
    // Using: float
    {
        std::complex<float> const z = 3.0f + 4.0if;
        std::complex<float> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> const z = 3.0 + 4.0i;
        std::complex<double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> const z = 3.0L + 4.0iL;
        std::complex<long double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> const z(3.0Q, 4.0Q);
        std::complex<__float128> const cz = std::conj(z);

        std::cout << helper::to_string(cz) << std::endl;
        std::cout << "Re(cz) = " << helper::to_string(cz.real()) << ", Im(cz) = " << helper::to_string(cz.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "conjugate: z = 2i" << std::endl;

    // z = 2i
    // Using: float
    {
        std::complex<float> const z = 2.0if;
        std::complex<float> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> const z = 2.0i;
        std::complex<double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> const z = 2.0iL;
        std::complex<long double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> const z(0.0Q, 2.0Q);
        std::complex<__float128> const cz = std::conj(z);

        std::cout << helper::to_string(cz) << std::endl;
        std::cout << "Re(cz) = " << helper::to_string(cz.real()) << ", Im(cz) = " << helper::to_string(cz.imag()) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "conjugate: z = 5" << std::endl;

    // z = 5
    // Using: float
    {
        std::complex<float> const z = 5.0f;
        std::complex<float> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: double
    {
        std::complex<double> const z = 5.0;
        std::complex<double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> const z = 5.0L;
        std::complex<long double> const cz = std::conj(z);

        std::cout << cz << std::endl;
        std::cout << "Re(cz) = " << cz.real() << ", Im(cz) = " << cz.imag() << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> const z(5.0Q, 0.0Q);
        std::complex<__float128> const cz = std::conj(z);

        std::cout << helper::to_string(cz) << std::endl;
        std::cout << "Re(cz) = " << helper::to_string(cz.real()) << ", Im(cz) = " << helper::to_string(cz.imag()) << std::endl;
    }
}
