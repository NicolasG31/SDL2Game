#ifndef MYGAME_SPRITECOMPONENT_H
#define MYGAME_SPRITECOMPONENT_H

#include "PositionComponent.h"
#include "../TextureManager.h"
#include "SDL.h"

class SpriteComponent : public Component
{
private:
    PositionComponent *position;
    SDL_Texture *texture;
    SDL_Rect srcRect, destRect;

public:
    SpriteComponent() = default;
    SpriteComponent(const char* path)
    {
        texture = TextureManager::loadTexture(path);
    }

    void init() override
    {
        position = &entity->getComponent<PositionComponent>();

        srcRect.x = srcRect.y = 0;
        srcRect.w = srcRect.h = 32;
        destRect.w = destRect.h = 64;
    }

    void update() override
    {
        destRect.x = position->x();
        destRect.y = position->y();
    }

    void draw() override
    {
        TextureManager::draw(texture, srcRect, destRect);
    }
};

#endif //MYGAME_SPRITECOMPONENT_H
