#include "p419_Problem_3.h"
#include "Helper.h"

#include <complex>
#include <iostream>
#include <quadmath.h>

using namespace std::complex_literals;

/**
 * \brief p419_Problem_3a
 * \see Book2.md, (page 419, Problem 3 (a))
 */
void p419_Problem_3a()
{
    // Using float
    {
        std::complex<float> const z = 0.0f + 1.0if;
        std::complex<float> const result = std::pow(z, 3);

        std::cout << "result (float): " << result << std::endl;
    }

    // Using double
    {
        std::complex<double> const z = 0.0 + 1.0i;
        std::complex<double> const result = std::pow(z, 3);

        std::cout << "result (double): " << result << std::endl;
    }

    // Using long double
    {
        std::complex<long double> const z = 0.0L + 1.0iL;
        std::complex<long double> const result = std::pow(z, 3);

        std::cout << "result (long double): " << result << std::endl;
    }

    // Using __float128
    {
        std::complex<__float128> const z(0.0Q, 1.0Q);
        std::complex<__float128> const result = std::pow(z, 3);

        bool const precise = true;

        std::cout << "result (__float128): " << helper::to_string(result, precise) << std::endl;
    }
}

/**
 * \brief p419_Problem_3b
 * \see Book2.md, (page 419, Problem 3 (b))
 */
void p419_Problem_3b()
{
    // Using float
    {
        std::complex<float> const z = 0.0f + 1.0if;
        std::complex<float> const result = std::pow(z, 4);

        std::cout << "result (float): " << result << std::endl;
    }

    // Using double
    {
        std::complex<double> const z = 0.0 + 1.0i;
        std::complex<double> const result = std::pow(z, 4);

        std::cout << "result (double): " << result << std::endl;
    }

    // Using long double
    {
        std::complex<long double> const z = 0.0L + 1.0iL;
        std::complex<long double> const result = std::pow(z, 4);

        std::cout << "result (long double): " << result << std::endl;
    }

    // Using __float128
    {
        std::complex<__float128> const z(0.0Q, 1.0Q);
        std::complex<__float128> const result = std::pow(z, 4);

        bool const precise = true;

        std::cout << "result (__float128): " << helper::to_string(result, precise) << std::endl;
    }
}

/**
 * \brief p419_Problem_3c
 * \see Book2.md, (page 419, Problem 3 (c))
 */
void p419_Problem_3c()
{
    // Using float
    {
        std::complex<float> const z = 0.0f + 1.0if;
        std::complex<float> const result = std::pow(z, 23);

        std::cout << "result (float): " << result << std::endl;
    }

    // Using double
    {
        std::complex<double> const z = 0.0 + 1.0i;
        std::complex<double> const result = std::pow(z, 23);

        std::cout << "result (double): " << result << std::endl;
    }

    // Using long double
    {
        std::complex<long double> const z = 0.0L + 1.0iL;
        std::complex<long double> const result = std::pow(z, 23);

        std::cout << "result (long double): " << result << std::endl;
    }

    // Using __float128
    {
        std::complex<__float128> const z(0.0Q, 1.0Q);
        std::complex<__float128> const result = std::pow(z, 23);

        bool const precise = true;

        std::cout << "result (__float128): " << helper::to_string(result, precise) << std::endl;
    }
}

/**
 * \brief p419_Problem_3d
 * \see Book2.md, (page 419, Problem 3 (d))
 */
void p419_Problem_3d()
{
    // Using float
    {
        std::complex<float> const z1 = -4.0f;
        std::complex<float> const z2 = 0.0f + 1.0if;
        std::complex<float> const result = (z1 / std::pow(z2, 9));

        std::cout << "result (float): " << result << std::endl;
    }

    // Using double
    {
        std::complex<double> const z1 = -4.0;
        std::complex<double> const z2 = 0.0 + 1.0i;
        std::complex<double> const result = (z1 / std::pow(z2, 9));

        std::cout << "result (double): " << result << std::endl;
    }

    // Using long double
    {
        std::complex<long double> const z1 = -4.0L;
        std::complex<long double> const z2 = 0.0L + 1.0iL;
        std::complex<long double> const result = (z1 / std::pow(z2, 9));

        std::cout << "result (long double): " << result << std::endl;
    }

    // Using __float128
    {
        std::complex<__float128> const z1(-4.0Q, 0.0Q);
        std::complex<__float128> const z2(0.0Q, 1.0Q);
        std::complex<__float128> const result = (z1 / std::pow(z2, 9));

        bool const precise = true;

        std::cout << "result (__float128): " << helper::to_string(result, precise) << std::endl;
    }
}
