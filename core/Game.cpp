#include "Game.h"
#include <iostream>

Game::Game()
    : window(sf::VideoMode({450, 800}), "Tamagotchi Namorados"),
      pet("Samuel")
{
    std::cout << "Jogo iniciado!" << std::endl;

    window.setFramerateLimit(60);
}

Game::~Game()
{
    std::cout << "Jogo encerrado!" << std::endl;
}

void Game::run()
{
    while(window.isOpen())
    {
        processEvents();

        update();

        render();
    }
}

void Game::processEvents()
{
    while(const std::optional event = window.pollEvent())
    {
        if(event->is<sf::Event::Closed>())
        {
            window.close();
        }
    }
}

void Game::update()
{
    pet.update();
}

void Game::render()
{
    window.clear(sf::Color(30, 30, 30));

    backgroundRenderer.render(window);

    petRenderer.render(window);

    window.display();
}
