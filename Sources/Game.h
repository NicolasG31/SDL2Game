#ifndef _GAME_H
#define _GAME_H

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

#include "GameObject.h"
#include "TextureManager.h"
#include "Map.h"

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

    static SDL_Renderer *renderer;

private:
    bool            _isRunning;
    SDL_Window      *_window;

    GameObject      *_player;
    GameObject      *_enemy;
    Map             *_map;

};


#endif //_GAME_H
