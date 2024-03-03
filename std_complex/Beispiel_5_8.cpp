#include "Beispiel_5_8.h"
#include "Helper.h"

#include <cmath>
#include <complex>
#include <iostream>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.8
 * \see Book1.md, (Seite 304)
 */
void Beispiel_5_8()
{
    // Using: float
    {
        std::complex<float> z = (2.0f * ::sqrtf(3.0f)) + 2.0if;

        float const phi = std::arg(z);
        float const degree = helper::to_degree(phi);

        std::cout << "using float: " << z
            << ", phi (rad) = " << phi
            << ", phi (degree) = " << degree << std::endl;
    }
    // Using: double
    {
        std::complex<double> z = (2.0 * ::sqrt(3.0)) + 2.0i;

        double const phi = std::arg(z);
        double const degree = helper::to_degree(phi);

        std::cout << "using double: " << z
            << ", phi (rad) = " << phi
            << ", phi (degree) = " << degree << std::endl;
    }
    // Using: long double
    {
        std::complex<long double> z = (2.0L * ::sqrtl(3.0L)) + 2.0Li;

        long double const phi = std::arg(z);
        long double const degree = helper::to_degree(phi);

        std::cout << "using long double: " << z
            << ", phi (rad) = " << phi
            << ", phi (degree) = " << degree << std::endl;
    }
}
