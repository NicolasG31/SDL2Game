#ifndef _TEXTURE_MANAGER_H
#define _TEXTURE_MANAGER_H

#include "Game.h"

class TextureManager {

public:
    static SDL_Texture *loadTexture(const char *filename, SDL_Renderer *ren);
};


#endif //_TEXTURE_MANAGER_H
