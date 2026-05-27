#include "Entity.h"

Entity::Entity()
{
    std::cout << "Construtor de Entity chamado" << std::endl;
}

Entity::Entity(std::string nomeEntity)
    : nome(nomeEntity)
{
    std::cout << "Construtor de Entity com nome chamado" << std::endl;
}

Entity::~Entity()
{
    std::cout << "Destrutor de Entity chamado" << std::endl;
}
