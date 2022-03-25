//
// Created by marcf on 24.03.2022.
//

#ifndef MINESWEEPER_MAP_H
#define MINESWEEPER_MAP_H

#include "Field.h"

#define MAPMINERATIO 6.25f

class Map {
private:
    unsigned int height;
    unsigned int width;

    Field* fields;

public:
    Map() = default;
    explicit Map(int h, int w);
    ~Map();

    void setBadNeighborsOneField(int badNeighbors,int h,int w);
    Field getOneField(unsigned int h,unsigned int w);

    unsigned int getHeight(){return height;}
    unsigned int getWidth(){return width;}

private:
    //Initializer
    void initializeMap();
    void rollAMap();
    void initAllFields();
    void calcNeighbors();

    //Helper
    int howManyBadNeighbors(int pos);

    int checkForMines(const int* neighborsPos, int n);

    bool posOK(int pos) const;

public:
    //Gamechanger
    void makeAllVisibile();

    std::string toString();

};


#endif //MINESWEEPER_MAP_H
