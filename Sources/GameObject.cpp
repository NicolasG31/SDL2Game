#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char *textureSheet, int x, int y)
{
    _texture = TextureManager::loadTexture(textureSheet);

    _xpos = x; _ypos = y;
    _srcRect.w = 32; _srcRect.h = 32;
    _srcRect.x = 0; _srcRect.y = 0;

    _dstRect.w = _srcRect.w * 2; _dstRect.h = _srcRect.h * 2;
    _dstRect.x = _xpos; _dstRect.y = _ypos;
}

GameObject::~GameObject()
{}

void GameObject::update()
{
    _ypos++;
    _xpos++;

    _dstRect.x = _xpos; _dstRect.y = _ypos;
}

void GameObject::render()
{
    SDL_RenderCopy(Game::renderer, _texture, &_srcRect, &_dstRect);

}
