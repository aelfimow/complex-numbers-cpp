#include "Aufgabe_5_2a.h"
#include "Helper.h"

#include <complex>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.1 (p. 300)
 * \see Book1.md
 */
void Aufgabe_5_2a()
{
    // Using float
    {
        std::complex<float> const z = 2.0f + 3.0if;

        float const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    // Using double
    {
        std::complex<double> const z = 2.0 + 3.0i;

        double const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    // Using long double
    {
        std::complex<long double> const z = 2.0L + 3.0iL;

        long double const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    // Using: __float128
    {
        std::complex<__float128> const z(2.0Q, 3.0Q);

#if 0
        __float128 const rho = std::abs(z); // does not compile
#else
        __float128 const rho1 = ::sqrtq((z.real() * z.real()) + (z.imag() * z.imag()));
        __float128 const rho2 = ::sqrtq(::powq(z.real(), 2.0Q) + ::powq(z.imag(), 2.0Q));
        __float128 const diff = (rho2 - rho1);
#endif

        bool const precise = true;

        std::cout << helper::to_string(z) << ":" << std::endl;
        std::cout << "    rho1 = " << helper::to_string(rho1, precise) << std::endl;
        std::cout << "    rho2 = " << helper::to_string(rho2, precise) << std::endl;
        std::cout << "    diff = " << helper::to_string(diff, precise) << std::endl;
    }
}
