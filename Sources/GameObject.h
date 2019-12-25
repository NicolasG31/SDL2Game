#ifndef _GAME_OBJECT_H
#define _GAME_OBJECT_H

#include "Game.h"

class GameObject {

public:
    GameObject(const char* textureSheet, SDL_Renderer* ren, int x, int y);
    ~GameObject();

    void update();
    void render();

private:
    int _xpos;
    int _ypos;
    SDL_Texture *_texture;
    SDL_Rect _srcRect, _dstRect;
    SDL_Renderer *_renderer;

};


#endif //_GAME_OBJECT_H
