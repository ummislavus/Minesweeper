//
// Created by marcf on 24.03.2022.
//

#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H
#include "Map.h"

class Game {

    Map* map;
    bool isOver;
public:
    Game();
    ~Game();

    bool gameLoop();


    void showMap();

    void gameOver();
    void turn(int h,int w);
    bool isItOver() const{return isOver;}

    bool getPlayerInputs(int& h, int& w);

};


#endif //MINESWEEPER_GAME_H
