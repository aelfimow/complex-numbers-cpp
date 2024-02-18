#include "Aufgabe_5_2_valarray.h"
#include "Helper.h"

#include <complex>
#include <valarray>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Aufgabe 5.2 (p. 300) using std::valarray
 * \see Book1.md
 */
void Aufgabe_5_2_valarray()
{
    // Using float
    {
        float const a = 1.0f;

        using cfloat = std::complex<float>;

        std::valarray<cfloat> const zs
        {
            2.0f + 3.0if,
            2.0f - 3.0if,
            { ::sqrtf(2.0f), ::sqrtf(7.0f) },
            { a, a },
            4.0if,
            -2.0f - 2if
        };

        std::valarray<cfloat> const rhos = std::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            cfloat const &z = zs[i];
            cfloat const &rho = rhos[i];

            std::cout << z << ": " << rho << std::endl;
        }
    }
}
