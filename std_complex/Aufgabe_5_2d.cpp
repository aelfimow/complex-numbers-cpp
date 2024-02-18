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

    /**
     * \brief Aufgabe 5.2d (p. 300) using __float128
     * \see Book1.md
     */
    void Aufgabe_5_2d(__float128 a)
    {
        std::complex<__float128> const z(a, a);

#if 0
        __float128 const rho = std::abs(z); // does not compile
#else
        __float128 const rho1 = ::sqrtq((z.real() * z.real()) + (z.imag() * z.imag()));
        __float128 const rho2 = ::sqrtq(::powq(z.real(), 2.0Q) + ::powq(z.imag(), 2.0Q));
        __float128 const diff = (rho2 - rho1);
#endif

        bool const precise = true;

        std::cout << helper::to_string(z, precise) << ":" << std::endl;
        std::cout << "    rho1 = " << helper::to_string(rho1, precise) << std::endl;
        std::cout << "    rho2 = " << helper::to_string(rho2, precise) << std::endl;
        std::cout << "    diff = " << helper::to_string(diff, precise) << std::endl;
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
    Aufgabe_5_2d(1.0Q);
}
