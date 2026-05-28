#include "BackgroundRenderer.h"

#include <iostream>

BackgroundRenderer::BackgroundRenderer()
    : texture("assets/images/background.png"),
      sprite(texture)
{
    sprite.setPosition({0.f, 0.f});
}

void BackgroundRenderer::render(sf::RenderWindow& window)
{
    window.draw(sprite);
}
