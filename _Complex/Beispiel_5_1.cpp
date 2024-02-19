#include "Beispiel_5_1.h"
#include "Helper.h"

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
        _Complex float z = 3.0f + 7.0fi;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
    // Using: double
    {
#if 0
        _Complex double z = 3.0 + 7.0i; // Compiler complains about std::complex<double>
#endif
        _Complex double z = 3.0 + 7.0j;

        std::cout << helper::to_string(z) << std::endl;
        std::cout << "Re(z) = " << __real__ z << ", Im(z) = " << __imag__ z << std::endl;
    }
}
