#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet
{
private:
    std::string nome;
    std::string personalidade;
    std::string humor;

    static int id;

    int felicidade;
    int xp_acumulado;
    int nivel;

public:

    Pet();
    Pet(std::string nomePet);
   ~Pet();

    void alimentar();
    void brincar();
    void dormir();

    void atualizar();
    void imprimir();
    int calcularNivel();

    int getFelicidade();
    int getXp();
    int getNivel();

    std::string getNome();
};

#endif
