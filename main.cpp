//#include "core/Game.h"
#include "entities/Pet.h"
//#include "ui/UI.h"
//#include "header.h"
#include <iostream>

int main()
{
    Pet Alien("Alex");

    Alien.alimentar();
    Alien.brincar();
    Alien.dormir();
    Alien.alimentar();
    Alien.brincar();
    Alien.dormir();
    Alien.brincar();
    Alien.brincar();

    Alien.imprimir();

    return 0;
}

    /*Game Flufly;

    Flufly.run();*/
