#include "Aufgabe_5_2a.h"
#include "Helper.h"

#include <cmath>
#include <iostream>
#include <quadmath.h>

/**
 * \brief Aufgabe 5.2a (p. 300)
 * \see Book1.md
 */
void Aufgabe_5_2a()
{
    // Using float
    {
        _Complex float const z = 2.0f + 3.0fi;

        float const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using double
    {
        _Complex double const z = 2.0 + 3.0j;

        double const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using long double
    {
        _Complex long double const z = 2.0L + 3.0Li;

        long double const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using: __complex128
    {
        __complex128 const z = 2.0Q + 3.0Qi;

        __float128 const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << helper::to_string(rho) << std::endl;
    }
}
