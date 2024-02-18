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
            -2.0f - 2.0if
        };

        std::valarray<cfloat> const rhos = std::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            cfloat const &z = zs[i];
            cfloat const &rho = rhos[i];

            std::cout << z << ": " << rho << std::endl;
        }
    }

    // Using double
    {
        double const a = 1.0;

        using cdouble = std::complex<double>;

        std::valarray<cdouble> const zs
        {
            2.0 + 3.0i,
            2.0 - 3.0i,
            { ::sqrt(2.0), ::sqrt(7.0) },
            { a, a },
            4.0i,
            -2.0 - 2.0i
        };

        std::valarray<cdouble> const rhos = std::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            cdouble const &z = zs[i];
            cdouble const &rho = rhos[i];

            std::cout << z << ": " << rho << std::endl;
        }
    }

    // Using long double
    {
        long double const a = 1.0L;

        using cldouble = std::complex<long double>;

        std::valarray<cldouble> const zs
        {
            2.0L + 3.0iL,
            2.0L - 3.0iL,
            { ::sqrtl(2.0L), ::sqrtl(7.0L) },
            { a, a },
            4.0iL,
            -2.0L - 2.0iL
        };

        std::valarray<cldouble> const rhos = std::abs(zs);

        for (size_t i = 0U; i < zs.size(); ++i)
        {
            cldouble const &z = zs[i];
            cldouble const &rho = rhos[i];

            std::cout << z << ": " << rho << std::endl;
        }
    }
}
