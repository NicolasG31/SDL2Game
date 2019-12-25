#include "Game.h"

GameObject      *player;
GameObject      *enemy;

Game::Game()
{}

Game::~Game()
{}

void Game::init(char *title, int x, int y, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen) { flags = SDL_WINDOW_FULLSCREEN; }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
         std::cout << "SDL Initialized" << std::endl;

         // Initializing window
         _window = SDL_CreateWindow(title, x, y, width, height, flags);
         if (_window)
         {
            std::cout << "Window created" << std::endl;
         }

         // Initializing renderer
         _renderer = SDL_CreateRenderer(_window, -1, 0);
         if (_renderer)
         {
             SDL_SetRenderDrawColor(_renderer, 255, 255, 255, 255);
             std::cout << "Renderer created" << std::endl;
         }

         _isRunning = true;

         // Player Init
         player = new GameObject("../Assets/player.png", _renderer, 0, 0);
         enemy = new GameObject("../Assets/enemy.png", _renderer, 50, 50);
    }
    else
    {
        _isRunning = false;
    }
}

void Game::handleEvents()
{
    SDL_Event event;

    SDL_PollEvent(&event);
    switch (event.type)
    {
        case SDL_QUIT:
            _isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update()
{
    player->update();
    enemy->update();
}

void Game::clean()
{
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}

void Game::render()
{
    SDL_RenderClear(_renderer);
    //Add stuff to render
    player->render();
    enemy->render();
    SDL_RenderPresent(_renderer);
}

bool Game::running()
{
    return _isRunning;
}

