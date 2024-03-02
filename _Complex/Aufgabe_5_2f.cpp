#include "Aufgabe_5_2f.h"
#include "Helper.h"

#include <iostream>
#include <quadmath.h>

/**
 * \brief Aufgabe 5.2b
 * \see Book1.md, (Seite 300)
 */
void Aufgabe_5_2f()
{
    // Using float
    {
        _Complex float const z = -2.0f - 2.0fi;

        float const rho = helper::abs(z);

        std::cout << "using float: " << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using double
    {
        _Complex double const z = -2.0 - 2.0j;

        double const rho = helper::abs(z);

        std::cout << "using double: " << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using long double
    {
        _Complex long double const z = -2.0L - 2.0Li;

        long double const rho = helper::abs(z);

        std::cout << "using long double: " << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using __complex128
    {
        __complex128 const z = -2.0Q - 2.0Qi;

        __float128 const rho = helper::abs(z);

        std::cout << "using __complex128: " << helper::to_string(z) << ": " << helper::to_string(rho) << std::endl;
    }
}
