#include "Aufgabe_5_2e.h"
#include "Helper.h"

#include <iostream>
#include <quadmath.h>

/**
 * \brief Aufgabe 5.2e
 * \see Book1.md, (Seite 300)
 */
void Aufgabe_5_2e()
{
    // Using float
    {
        _Complex float const z = 4.0fi;

        float const rho = helper::abs(z);

        std::cout << "using float: " << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using double
    {
        _Complex double const z = 4.0j;

        double const rho = helper::abs(z);

        std::cout << "using double: " << helper::to_string(z) << ": " << rho << std::endl;
    }
}
