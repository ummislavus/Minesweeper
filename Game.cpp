//
// Created by marcf on 24.03.2022.
//

#include <iostream>
#include "Game.h"

Game::Game(){
    cout << "How big should the map be?\n Height: ";
    int h,w;
    cin >> h;
    cout << "Width: ";
    cin >> w;

    map = new Map(h,w);

}

Game::~Game(){
    delete map;
}