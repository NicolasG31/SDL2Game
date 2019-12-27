#include "Game.h"

int main(int av, char *ac[])
{
    // FPS limit related
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;
    Uint32 frameStart;
    Uint32 frameTime;

    Game *game = new Game();
    game->init("My Game", 10, 10, 800, 640, false);

    while (game->running())
    {
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime)
        {
            SDL_Delay(frameDelay - frameTime);
        }
    }

    game->clean();

    return 0;
}