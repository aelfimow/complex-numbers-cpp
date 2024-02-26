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

    _Complex double conjugate(_Complex double const &z)
    {
        _Complex double result = z;

        __imag__ result *= -1.0;

        return result;
    }

    _Complex long double conjugate(_Complex long double const &z)
    {
        _Complex long double result = z;

        __imag__ result *= -1.0L;

        return result;
    }

    __complex128 conjugate(__complex128 const &z)
    {
        __complex128 result = z;

        __imag__ result *= -1.0Q;

        return result;
    }
}

/**
 * \brief Beispiel 5.2
 * \see Book1.md, (Seite 297)
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
    // Using: double
    {
#if 0
        _Complex double const z = 3.0 - 4.0i; // Compiler complains about std::complex<double>
#endif
        _Complex double const z = 3.0 - 4.0j;
        _Complex double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: long double
    {
        _Complex long double const z = 3.0L - 4.0Li;
        _Complex long double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: __complex128
    {
        __complex128 const z = 3.0Q - 4.0Qi;
        __complex128 const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "conjugate: z = 3 + 4i" << std::endl;

    // z = 3 + 4i
    // Using: float
    {
        _Complex float const z = 3.0f + 4.0fi;
        _Complex float const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: double
    {
        _Complex double const z = 3.0 + 4.0j;
        _Complex double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: long double
    {
        _Complex long double const z = 3.0L + 4.0Li;
        _Complex long double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: __complex128
    {
        __complex128 const z = 3.0Q + 4.0Qi;
        __complex128 const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "conjugate: z = 2i" << std::endl;

    // z = 2i
    // Using: float
    {
        _Complex float const z = 2.0fi;
        _Complex float const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: double
    {
        _Complex double const z = 2.0j;
        _Complex double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: long double
    {
        _Complex long double const z = 2.0Li;
        _Complex long double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: __complex128
    {
        __complex128 const z = 2.0Qi;
        __complex128 const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "conjugate: z = 5" << std::endl;

    // z = 5
    // Using: float
    {
        _Complex float const z = 5.0f;
        _Complex float const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: double
    {
        _Complex double const z = 5.0;
        _Complex double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: long double
    {
        _Complex long double const z = 5.0L;
        _Complex long double const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
    // Using: __complex128
    {
        __complex128 const z = 5.0Q;
        __complex128 const cz = conjugate(z);

        std::cout << helper::to_string(z) << " -> " << helper::to_string(cz) << std::endl;
    }
}
