#ifndef PET_H
#define PET_H

#include "Entity.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>

class Pet: public Entity
{
private:
    //std::string nome;
    std::string personalidade;
    std::string humor;

    static int id;

    int felicidade;
    int xp_acumulado;
    int nivel;

    sf::Texture texture;
    sf::Sprite* sprite;

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

    void update() override;
    void render(sf::RenderWindow& window) override;
};

#endif
