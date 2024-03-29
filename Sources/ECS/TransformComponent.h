#ifndef MYGAME_POSITIONCOMPONENT_H
#define MYGAME_POSITIONCOMPONENT_H

#include "../Vector2D.h"

class TransformComponent : public Component
{
public:

    Vector2D position;

    TransformComponent()
    {
        position.x = 0;
        position.y = 0;
    }

    TransformComponent(float x, float y)
    {
        position.x = x;
        position.y = y;
    }

    void update() override
    {

    }

};

#endif //MYGAME_POSITIONCOMPONENT_H
