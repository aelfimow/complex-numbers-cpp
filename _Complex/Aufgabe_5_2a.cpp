#include "Aufgabe_5_2a.h"
#include "Helper.h"

#include <cmath>
#include <iostream>
#include <quadmath.h>

namespace
{
    float abs(_Complex float const &z)
    {
        float const r2 = ::powf(__real__ z, 2.0f);
        float const i2 = ::powf(__imag__ z, 2.0f);

        float const rho = ::sqrtf(r2 + i2);

        return rho;
    }
}

/**
 * \brief Aufgabe 5.2a (p. 300)
 * \see Book1.md
 */
void Aufgabe_5_2a()
{
    // Using float
    {
        _Complex float const z = 2.0f + 3.0fi;

        float const rho = abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }
}
