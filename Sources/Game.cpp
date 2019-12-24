#include "Game.h"
#include "TextureManager.h"

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
         _playerTex = TextureManager::LoadTexture("../Assets/player.png", _renderer);
        _pRect.h = 64;
        _pRect.w = 64;
        _pRect.x = 0;
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
    _pRect.x++;
    std::cout << _pRect.x << std::endl;
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
    SDL_RenderCopy(_renderer, _playerTex, NULL, &_pRect);
    SDL_RenderPresent(_renderer);
}

bool Game::running()
{
    return _isRunning;
}

