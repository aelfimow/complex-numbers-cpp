#include "Beispiel_5_8.h"
#include "Helper.h"

#include <cmath>
#include <complex>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.8 with z1
 * \see Book1.md, (Seite 304)
 */
static void Beispiel_5_8_1()
{
    // Using: float
    {
        std::complex<float> const z = (2.0f * ::sqrtf(3.0f)) + 2.0if;

        float const phi = std::arg(z);
        float const degree = helper::to_degree(phi);

        std::cout << "using float: " << z
            << ", phi (rad) = " << phi
            << ", phi (degree) = " << degree << std::endl;
    }
    // Using: double
    {
        std::complex<double> const z = (2.0 * ::sqrt(3.0)) + 2.0i;

        double const phi = std::arg(z);
        double const degree = helper::to_degree(phi);

        std::cout << "using double: " << z
            << ", phi (rad) = " << phi
            << ", phi (degree) = " << degree << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> const z = (2.0L * ::sqrtl(3.0L)) + 2.0Li;

        long double const phi = std::arg(z);
        long double const degree = helper::to_degree(phi);

        std::cout << "using long double: " << z
            << ", phi (rad) = " << phi
            << ", phi (degree) = " << degree << std::endl;
    }
    // Using: __float128
    {
        std::complex<__float128> const z((2.0Q * ::sqrtq(3.0)), 2.0Q);

        __float128 const phi = helper::arg(z);
        __float128 const degree = helper::to_degree(phi);

        std::cout << "using __float128: " << helper::to_string(z)
            << ", phi (rad) = " << helper::to_string(phi)
            << ", phi (degree) = " << helper::to_string(degree) << std::endl;
    }
}

/**
 * \brief Beispiel 5.8
 * \see Book1.md, (Seite 304)
 */
void Beispiel_5_8()
{
    Beispiel_5_8_1();
}
