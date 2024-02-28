#include "Aufgabe_5_2d.h"
#include "Helper.h"

#include <cmath>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

namespace
{
    /**
     * \brief Aufgabe 5.2d using float
     * \see Book1.md, (Seite 300)
     */
    void Aufgabe_5_2d(float a)
    {
        _Complex float const z = a + (a * 1.0fi);

        float const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }

    /**
     * \brief Aufgabe 5.2d using double
     * \see Book1.md, (Seite 300)
     */
    void Aufgabe_5_2d(double a)
    {
        _Complex double const z = a + (a * 1.0j);

        double const rho = helper::abs(z);

        std::cout << helper::to_string(z) << ": " << rho << std::endl;
    }
}

/**
 * \brief Aufgabe 5.2d
 * \see Book1.md, (Seite 300)
 */
void Aufgabe_5_2d()
{
    Aufgabe_5_2d(1.0f);
    Aufgabe_5_2d(1.0);
}
