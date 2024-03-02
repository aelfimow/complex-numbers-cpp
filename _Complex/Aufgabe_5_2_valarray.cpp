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

            std::cout << "with float: " << helper::to_string(z) << ": " << rho << std::endl;
        }
    }

    // Using double
    {
        double const a = 1.0;

        std::valarray<_Complex double> const zs
        {
            2.0 + 3.0j,
            2.0 - 3.0j,
            { ::sqrt(2.0), ::sqrt(7.0) },
            { a, a },
            4.0j,
            -2.0 - 2.0j
        };

        std::valarray<double> const rhos = helper::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            _Complex double const &z = zs[i];
            double const &rho = rhos[i];

            std::cout << "with double: " << helper::to_string(z) << ": " << rho << std::endl;
        }
    }

    // Using long double
    {
        long double const a = 1.0L;

        std::valarray<_Complex long double> const zs
        {
            2.0L + 3.0Li,
            2.0L - 3.0Li,
            { ::sqrtl(2.0L), ::sqrtl(7.0L) },
            { a, a },
            4.0Li,
            -2.0L - 2.0Li
        };

        std::valarray<long double> const rhos = helper::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            _Complex long double const &z = zs[i];
            long double const &rho = rhos[i];

            std::cout << "with long double: " << helper::to_string(z) << ": " << rho << std::endl;
        }
    }
}
