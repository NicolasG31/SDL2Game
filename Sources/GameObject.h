#ifndef _GAME_OBJECT_H
#define _GAME_OBJECT_H

#include <SDL.h>

class GameObject {

public:
    GameObject(const char* textureSheet, int x, int y);
    ~GameObject();

    void update();
    void render();

private:
    int _xpos;
    int _ypos;
    SDL_Texture *_texture;
    SDL_Rect _srcRect, _dstRect;

};


#endif //_GAME_OBJECT_H
