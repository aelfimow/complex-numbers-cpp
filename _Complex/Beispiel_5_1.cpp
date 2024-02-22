#include "Beispiel_5_1.h"
#include "Helper.h"

#include <quadmath.h>
#include <iostream>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.1 (p. 297)
 * \see Book1.md
 */
void Beispiel_5_1()
{
    std::cout << std::endl;
    std::cout << "z = 3 + 7i" << std::endl;

    // z = 3 + 7i
    // Using: float
    {
        _Complex float const z = 3.0f + 7.0fi;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: double
    {
#if 0
        _Complex double const z = 3.0 + 7.0i; // Compiler complains about std::complex<double>
#endif
        _Complex double const z = 3.0 + 7.0j;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: long double
    {
        _Complex long double const z = 3.0L + 7.0Li;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: __float128
    {
        __complex128 const z = 3.0Q + 7.0Qi;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << helper::to_string(__real__ z) << ", Im(z) = " << helper::to_string(__imag__ z) << std::endl;
    }

    std::cout << std::endl;
    std::cout << "z = -3 - 7i" << std::endl;

    // z = -3 - 7i
    // Using: float
    {
        _Complex float const z = -3.0f - 7.0fi;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: double
    {
        _Complex double const z = -3.0 - 7.0j;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: long double
    {
        _Complex long double const z = -3.0L - 7.0Li;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: __float128
    {
        __complex128 const z = -3.0Q - 7.0Qi;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << helper::to_string(__real__ z) << ", Im(z) = " << helper::to_string(__imag__ z) << std::endl;
    }
}
