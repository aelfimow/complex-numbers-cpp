#include "Beispiel_5_9.h"
#include "Helper.h"

#include <cmath>
#include <numbers>
#include <complex>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief Beispiel 5.9
 * \see Book1.md, (Seite 305)
 */
void Beispiel_5_9()
{
    // Using: float
    {
        float const alpha = ((5.0f * std::numbers::pi_v<float>) / 3.0f);

        std::complex<float> const z = (2.0f * (::cosf(alpha) + (1.0fi * ::sinf(alpha))));

        float const i2 = (z.imag() * z.imag());

        std::cout << "using float: " << z << "; imag^2: " << i2 << std::endl;
    }

    // Using: double
    {
        double const alpha = ((5.0 * std::numbers::pi_v<double>) / 3.0);

        std::complex<double> const z = (2.0 * (::cos(alpha) + (1.0i * ::sin(alpha))));

        double const i2 = (z.imag() * z.imag());

        std::cout << "using double: " << z << "; imag^2: " << i2 << std::endl;
    }
}
