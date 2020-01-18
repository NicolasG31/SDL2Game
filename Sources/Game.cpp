#include "Game.h"

#include "GameObject.h"
#include "Map.h"
#include "ECS/ECS.h"
#include "ECS/Components.h"
#include "Vector2D.h"

SDL_Renderer *Game::renderer = nullptr;
SDL_Event Game::event;

Map *map;
Manager manager;
auto& player(manager.addEntity());

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
        map = new Map();
        player.addComponent<TransformComponent>();
        player.addComponent<SpriteComponent>("../Assets/player.png");
    }
    else
    {
        _isRunning = false;
    }
}

void Game::handleEvents()
{
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
    manager.refresh();
    manager.update();

    player.getComponent<TransformComponent>().position.Add(Vector2D(1, 1));

    if (player.getComponent<TransformComponent>().position.x > 100)
    {
        player.getComponent<SpriteComponent>().setTexture("../Assets/enemy.png");
    }
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
    map->drawMap();
    manager.draw();
    SDL_RenderPresent(renderer);
}

bool Game::running()
{
    return _isRunning;
}

