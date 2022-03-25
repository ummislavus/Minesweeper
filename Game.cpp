//
// Created by marcf on 24.03.2022.
//

#include <iostream>
#include "Game.h"

Game::Game(){
    std::cout << "How big should the map be?\n Height: ";
    int h,w;
    //cin >> h;
    std::cout << "Width: ";
    //cin >> w;
    std::cout << std::endl;h=5;w=5;
    map = new Map(h,w);

    isOver = false;

}

Game::~Game(){
    delete map;
}

void Game::showMap() {
    unsigned int h = map->getHeight();
    unsigned int w = map->getWidth();
    unsigned int size = h*w;
    //char* arr = shownArr();
    std::cout << "State of Game!\n\t" ;
    for(int i = 1; i <= w; i++){
        std::cout << i << "\t";
    }
    std::cout << "\n";
    for(int i = 0;i<h; i++){
        std::cout << i+1 << "\t";
        for(int j = 0; j < map->getWidth(); j++){
            if(map->getOneField(h,w).gotLookedAt()){
                int count = map->getOneField(i+1,j+1).badNeighborsCount();
                if(count == 9){
                    std::cout << "!" << "\t";
                }else{
                    std::cout << count << "\t";
                }

            }else{
                std::cout << "x\t";
            }
        }
        std::cout << "\n";
    }
}

void Game::gameOver() {
    isOver = true;
    map->makeAllVisible();
}

void Game::turn(int h, int w) {

    if(map->getOneField(h,w).gotLookedAt()){
        std::cout << "What r u doin', try a new field!" << std::endl;
        return;
    }

    int checkedField = map->lookOneUp(h,w);
    if(checkedField == 9){
        gameOver();
    }



}

bool Game::gameLoop() {

    while(!isOver){
        showMap();

        int h,w;

        if(getPlayerInputs(h,w)){
            turn(h,w);
        }

    }


    return false;
}

bool Game::getPlayerInputs(int &h, int &w) {
    std::cout << "Welches Feld willst du aufdecken?\n Height: ";
    std::cin >> h;
    std::cout << "Width: ";
    std::cin >> w;

    if(h < 1 || h > map->getHeight() || w < 1 || w > map->getWidth()){
        return false;
    }
    return true;
}


