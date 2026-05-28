#ifndef BACKGROUND_RENDERER_H
#define BACKGROUND_RENDERER_H

#include <SFML/Graphics.hpp>

class BackgroundRenderer
{
private:

    sf::Texture texture;
    sf::Sprite sprite;

public:

    BackgroundRenderer();

    void render(sf::RenderWindow& window);
};

#endif
