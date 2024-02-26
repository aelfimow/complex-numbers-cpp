#include "Aufgabe_5_2b.h"
#include "Helper.h"

#include <cmath>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Aufgabe 5.2b (p. 300)
 * \see Book1.md
 */
void Aufgabe_5_2b()
{
    // Using float
    {
        _Complex float const z = 2.0f - 3.0fi;

        float const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using double
    {
        _Complex double const z = 2.0 - 3.0j;

        double const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }
}
