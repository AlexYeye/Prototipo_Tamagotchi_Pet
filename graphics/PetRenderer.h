#ifndef PET_RENDERER_H
#define PET_RENDERER_H

#include "../entities/Pet.h"

#include <SFML/Graphics.hpp>

class PetRenderer
{
private:

    sf::Texture texture;
    sf::Sprite sprite;

public:

    PetRenderer();

    void render(sf::RenderWindow& window);
};

#endif
