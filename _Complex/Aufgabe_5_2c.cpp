#include "Aufgabe_5_2c.h"
#include "Helper.h"

#include <cmath>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Aufgabe 5.2b
 * \see Book1.md, (Seite 300)
 */
void Aufgabe_5_2c()
{
    // Using float
    {
        _Complex float const z = ::sqrtf(2.0f) + (::sqrtf(7.0f) * 1.0fi);

        float const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using double
    {
        _Complex double const z = ::sqrt(2.0) + (::sqrt(7.0) * 1.0j);

        double const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }
}
