#include "PetRenderer.h"

#include <iostream>

PetRenderer::PetRenderer()
    : texture("assets/images/pet.png"),
      sprite(texture)
{
    sprite.setScale({0.7f, 0.7f});

    sf::FloatRect bounds = sprite.getGlobalBounds();

    sprite.setPosition({
        (450 - bounds.size.x) / 2.f,
        (800 - bounds.size.y) / 2.f
    });
}

void PetRenderer::render(sf::RenderWindow& window)
{
    window.draw(sprite);
}
