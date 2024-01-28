#include <complex>
#include <iostream>

using namespace std::complex_literals;

void Beispiel_5_1()
{
    {
        std::complex<float> z = 3.0f + 7.0if;

        std::cout << z << std::endl;
        std::cout << "Re(z) = " << z.real() << ", Im(z) = " << z.imag() << std::endl;
    }
}
