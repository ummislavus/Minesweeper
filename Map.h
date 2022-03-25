//
// Created by marcf on 24.03.2022.
//

#ifndef MINESWEEPER_MAP_H
#define MINESWEEPER_MAP_H

#include <cstdlib>
#include <stdexcept>
#include <iostream>
#include <cmath>
#include <vector>
#include <random>

#include "Field.h"

#define HOWMANYMINES 4

class Map {
private:
    unsigned int height;
    unsigned int width;

    std::vector<Field> fields;

public:
    Map() = default;
    explicit Map(int h, int w);
    ~Map();

    Field getOneField(unsigned int h,unsigned int w);

    unsigned int getHeight() const{return height;}
    unsigned int getWidth() const{return width;}

private:
    //Initializer
    void initializeMap();
    void rollAMap();
    void initAllFields();
    void calcNeighbors();

    //Helper
    int howManyBadNeighbors(int pos);

    int checkForMines(const std::vector<int>& neighborsPos);

    bool posOK(int pos) const;

public:
    //Gamechanger
    void makeAllVisible();

    int lookOneUp(int h, int w);

    std::string toString();

};


#endif //MINESWEEPER_MAP_H
