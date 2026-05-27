#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "../entities/Pet.h"

class Game
{
private:

    sf::RenderWindow window;

    Pet pet;

    void processEvents();
    void update();
    void render();

public:

    Game();
    ~Game();

    void run();
};

#endif
