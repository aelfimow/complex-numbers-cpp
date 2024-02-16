#include "Aufgabe_5_2a.h"
#include "Helper.h"

#include <complex>
#include <iostream>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.1 (p. 300)
 * \see Book1.md
 */
void Aufgabe_5_2a()
{
    // Using float
    {
        std::complex<float> const z = 2.0f + 3.0if;

        float const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }
}
