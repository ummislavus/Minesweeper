//
// Created by marcf on 24.03.2022.
//

#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H
#include "Map.h"

using namespace std;

class Game {

    Map* map;
public:
    Game();

    ~Game();

    void showMap();

    char* shownArr();

    void gameOver();

    Map getMap(){return *map;}

};


#endif //MINESWEEPER_GAME_H
