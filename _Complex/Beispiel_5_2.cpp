#include "Beispiel_5_2.h"
#include "Helper.h"

#include <complex>
#include <iostream>

using namespace std::complex_literals;

namespace
{
    _Complex float conjugate(_Complex float const &z)
    {
        _Complex float result = z;

        __imag__ result *= -1.0f;

        return result;
    }
}

/**
 * \brief Beispiel 5.2 (p. 297)
 * \see Book1.md
 */
void Beispiel_5_2()
{
    std::cout << std::endl;
    std::cout << "conjugate: z = 3 - 4i" << std::endl;

    // z = 3 - 4i
    // Using: float
    {
        _Complex float const z = 3.0f - 4.0fi;
        _Complex float const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
}
