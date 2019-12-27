#ifndef _TEXTURE_MANAGER_H
#define _TEXTURE_MANAGER_H

#include "Game.h"

class TextureManager {

public:
    static SDL_Texture *loadTexture(const char *filename);
    static void draw(SDL_Texture *tex, SDL_Rect src, SDL_Rect dst);

};


#endif //_TEXTURE_MANAGER_H
