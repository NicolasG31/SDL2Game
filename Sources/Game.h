#ifndef _GAME_H
#define _GAME_H

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

#include "GameObject.h"
#include "TextureManager.h"

class Game {

public:
    Game();
    ~Game();

    void init(char *title, int x, int y, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running();

private:
    bool            _isRunning;
    SDL_Window      *_window;
    SDL_Renderer    *_renderer;
};


#endif //_GAME_H
