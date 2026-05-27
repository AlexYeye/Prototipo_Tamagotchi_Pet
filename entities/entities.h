#ifndef ENTITIES_H
#define ENTITIES_H

class Entity
{
protected:
    std::string nome;

public:

    Entity

    virtual void update() = 0;
    virtual void render() = 0;
};

#endif // ENTITIES
