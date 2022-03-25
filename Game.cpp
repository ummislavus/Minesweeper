//
// Created by marcf on 24.03.2022.
//

#include <iostream>
#include "Game.h"

Game::Game(){
    cout << "How big should the map be?\n Height: ";
    int h,w;
    //cin >> h;
    cout << "Width: ";
    //cin >> w;
    std::cout << std::endl;h=5;w=5;
    map = new Map(h,w);

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
    cout << "\n";
    for(int i = 0;i<h; i++){
        std::cout << i+1 << "\t";
        for(int j = 0; j < map->getWidth(); j++){
            if(map->getOneField(h,w).gotLookedAt()){
                int count = map->getOneField(h,w).badNeighborsCount();
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

char *Game::shownArr() {
    unsigned int h = map->getHeight();
    unsigned int w = map->getWidth();
    unsigned int size = h*w;
    char* arr = (char*)malloc(h*w);


    return arr;
}

void Game::gameOver() {
    map->makeAllVisibile();
}
