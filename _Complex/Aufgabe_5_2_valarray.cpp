#include "Aufgabe_5_2_valarray.h"
#include "Helper.h"

#include <cmath>
#include <valarray>
#include <iostream>
#include <quadmath.h>

/**
 * \brief Aufgabe 5.2 using std::valarray
 * \see Book1.md, (Seite 300)
 */
void Aufgabe_5_2_valarray()
{
    // Using float
    {
        float const a = 1.0f;

        std::valarray<_Complex float> const zs
        {
            2.0f + 3.0fi,
            2.0f - 3.0fi,
            { ::sqrtf(2.0f), ::sqrtf(7.0f) },
            { a, a },
            4.0fi,
            -2.0f - 2.0fi
        };

        std::valarray<float> const rhos = helper::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            _Complex float const &z = zs[i];
            float const &rho = rhos[i];

            std::cout << helper::to_string(z) << ": " << rho << std::endl;
        }
    }
}
