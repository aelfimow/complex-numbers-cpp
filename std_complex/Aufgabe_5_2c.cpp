#include "Aufgabe_5_2c.h"
#include "Helper.h"

#include <complex>
#include <iostream>
#include <cmath>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Aufgabe 5.2c
 * \see Book1.md, (Seite 300)
 */
void Aufgabe_5_2c()
{
    // Using float
    {
        std::complex<float> const z(::sqrtf(2.0f), ::sqrtf(7.0f));

        float const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    // Using double
    {
        std::complex<double> const z(::sqrt(2.0), ::sqrt(7.0));

        double const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    // Using long double
    {
        std::complex<long double> const z(::sqrtl(2.0L), ::sqrtl(7.0L));

        long double const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    // Using: __float128
    {
        std::complex<__float128> const z(::sqrtq(2.0Q), ::sqrtq(7.0Q));

#if 0
        __float128 const rho = std::abs(z); // does not compile
#else
        __float128 const rho1 = ::sqrtq((z.real() * z.real()) + (z.imag() * z.imag()));
        __float128 const rho2 = ::sqrtq(::powq(z.real(), 2.0Q) + ::powq(z.imag(), 2.0Q));
        __float128 const diff = (rho2 - rho1);
#endif

        bool const precise = true;

        std::cout << helper::to_string(z, precise) << ":" << std::endl;
        std::cout << "    rho1 = " << helper::to_string(rho1, precise) << std::endl;
        std::cout << "    rho2 = " << helper::to_string(rho2, precise) << std::endl;
        std::cout << "    diff = " << helper::to_string(diff, precise) << std::endl;
    }
}
