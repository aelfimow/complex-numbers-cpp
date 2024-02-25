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

    double abs(_Complex double const &z)
    {
        double const r2 = ::pow(__real__ z, 2.0);
        double const i2 = ::pow(__imag__ z, 2.0);

        double const rho = ::sqrt(r2 + i2);

        return rho;
    }

    long double abs(_Complex long double const &z)
    {
        long double const r2 = ::powl(__real__ z, 2.0);
        long double const i2 = ::powl(__imag__ z, 2.0);

        long double const rho = ::sqrtl(r2 + i2);

        return rho;
    }

    __float128 abs(__complex128 const &z)
    {
        __float128 const r2 = ::powq(__real__ z, 2.0Q);
        __float128 const i2 = ::powq(__imag__ z, 2.0Q);

        __float128 const rho = ::sqrtq(r2 + i2);

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

    // Using double
    {
        _Complex double const z = 2.0 + 3.0j;

        double const rho = abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using long double
    {
        _Complex long double const z = 2.0L + 3.0Li;

        long double const rho = abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    // Using: __complex128
    {
        __complex128 const z = 2.0Q + 3.0Qi;

        __float128 const rho = abs(z);

        std::cout << helper::to_string(z) << ": " << helper::to_string(rho) << std::endl;
    }
}
