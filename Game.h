#ifndef MYGAME_GAME_H
#define MYGAME_GAME_H

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

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

    // Player related
    SDL_Texture     *_playerTex;
    SDL_Rect        _pRect;
};


#endif //MYGAME_GAME_H
