#include "Beispiel_5_1.h"
#include "Beispiel_5_2.h"
#include "Aufgabe_5_2a.h"
#include "Aufgabe_5_2b.h"
#include "Aufgabe_5_2c.h"

#include <cstdlib>
#include <iostream>


int main(int, char *[])
{
    std::cout << "Beispiel_5_1: " << std::endl;
    Beispiel_5_1();

    std::cout << "Beispiel_5_2: " << std::endl;
    Beispiel_5_2();

    std::cout << "Aufgabe_5_2a: " << std::endl;
    Aufgabe_5_2a();

    std::cout << "Aufgabe_5_2b: " << std::endl;
    Aufgabe_5_2b();

    std::cout << "Aufgabe_5_2c: " << std::endl;
    Aufgabe_5_2c();

    return EXIT_SUCCESS;
}
