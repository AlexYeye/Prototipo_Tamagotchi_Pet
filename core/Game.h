#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "../entities/Pet.h"
#include "../graphics/PetRenderer.h"
#include "../graphics/BackgroundRenderer.h"

class Game
{
private:

    sf::RenderWindow window;

    Pet pet;
    BackgroundRenderer backgroundRenderer;
    PetRenderer petRenderer;

public:

    Game();
    ~Game();

    void run();

    void processEvents();
    void update();
    void render();
};

#endif
