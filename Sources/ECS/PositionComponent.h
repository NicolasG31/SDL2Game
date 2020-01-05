#ifndef MYGAME_POSITIONCOMPONENT_H
#define MYGAME_POSITIONCOMPONENT_H

class PositionComponent : public Component
{
private:
    int ypos, xpos;

public:

    PositionComponent(int x, int y)
    {
        xpos = x;
        ypos = y;
    }

    int x() { return xpos; }
    int y() { return ypos; }

    void init() override
    {
        xpos = 0;
        ypos = 0;
    }

    void update() override
    {
        xpos++;
        ypos++;
    }

    void setPos(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
};

#endif //MYGAME_POSITIONCOMPONENT_H
