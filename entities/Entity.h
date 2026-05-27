#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class Entity
{
protected:
    std::string nome;

public:
    Entity();
    Entity(std::string nomeEntity);
    virtual ~Entity();

    virtual void update() = 0;
    virtual void render(sf::RenderWindow& window) = 0;
};

#endif
