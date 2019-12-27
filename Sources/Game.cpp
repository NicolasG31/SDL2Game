#include "Game.h"

SDL_Renderer *Game::renderer = nullptr;

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
         renderer = SDL_CreateRenderer(_window, -1, 0);
         if (renderer)
         {
             SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
             std::cout << "Renderer created" << std::endl;
         }

         _isRunning = true;

         // Player Init
        _player = new GameObject("../Assets/player.png", 0, 0);
        _enemy = new GameObject("../Assets/enemy.png", 50, 50);
        _map = new Map();
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
    _player->update();
    _enemy->update();
}

void Game::clean()
{
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}

void Game::render()
{
    SDL_RenderClear(renderer);
    //Add stuff to render
    _map->drawMap();
    _player->render();
    _enemy->render();
    SDL_RenderPresent(renderer);
}

bool Game::running()
{
    return _isRunning;
}

