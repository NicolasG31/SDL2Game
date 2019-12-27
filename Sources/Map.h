#ifndef MYGAME_MAP_H
#define MYGAME_MAP_H


#include <SDL.h>

class Map {

public:
    Map();
    ~Map();

    void loadMap(int arr[20][25]);
    void drawMap();

private:

    SDL_Rect _srcRect, _dstRect;
    SDL_Texture *_dirt, *_grass, *_water;

    int _map[20][25];

};


#endif //MYGAME_MAP_H
