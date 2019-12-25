//
// Created by Nicolas Guillon on 24/12/2019.
//

#include "TextureManager.h"

SDL_Texture* TextureManager::loadTexture(const char *filename, SDL_Renderer *ren)
{
    SDL_Surface *tempSurface = IMG_Load(filename);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);

    return texture;
}