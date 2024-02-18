#include "Aufgabe_5_2d.h"
#include "Helper.h"

#include <complex>
#include <iostream>
#include <cmath>
#include <quadmath.h>

using namespace std::complex_literals;

namespace
{
    /**
     * \brief Aufgabe 5.2d (p. 300) using float
     * \see Book1.md
     */
    void Aufgabe_5_2d(float a)
    {
        std::complex<float> const z(a, a);

        float const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    /**
     * \brief Aufgabe 5.2d (p. 300) using double
     * \see Book1.md
     */
    void Aufgabe_5_2d(double a)
    {
        std::complex<double> const z(a, a);

        double const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }

    /**
     * \brief Aufgabe 5.2d (p. 300) using long double
     * \see Book1.md
     */
    void Aufgabe_5_2d(long double a)
    {
        std::complex<long double> const z(a, a);

        long double const rho = std::abs(z);

        std::cout << z << ": " << rho << std::endl;
    }
}

/**
 * \brief Aufgabe 5.2d (p. 300)
 * \see Book1.md
 */
void Aufgabe_5_2d()
{
    Aufgabe_5_2d(1.0f);
    Aufgabe_5_2d(1.0);
    Aufgabe_5_2d(1.0L);
}
