#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <optional>

class Game
{
private:
    sf::RenderWindow window;

    void processEvents();
    void update();
    void render();

public:
    Game();

    void run();
};

#endif
