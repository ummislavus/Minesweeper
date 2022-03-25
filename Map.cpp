//
// Created by marcf on 24.03.2022.
//

#include <cstdlib>
#include <stdexcept>
#include <iostream>
#include <cmath>
#include "Map.h"

Map::Map(int h, int w) {

    height = h;
    width = w;

    fields = (Field*)malloc(h*w);
    initializeMap();
}

Map::~Map() {
    free(fields);
}

void Map::setBadNeighborsOneField(int badNeighbors, int h, int w) {
    fields[(h-1)*width+w-1].setNeighbors(badNeighbors);
}

Field Map::getOneField(unsigned int h,unsigned int w) {
    return fields[(h-1)*width+w-1];
}

void Map::initializeMap() {
    initAllFields();
    rollAMap();
    calcNeighbors();
}

void Map::rollAMap() {

    int minesToPlace = floor((height*width)/MAPMINERATIO + 0.5f);

    for(int i = 0; i < minesToPlace; i++){
        int minePos = rand() % height*width;
        //int neighbors = fields[minePos].lookUp();
        if(!fields[minePos].isAMine()){
            fields[minePos].makeItAMine();
            std::cout << "Mine placed!" << std::endl;
        }else{
            i--;
            continue;
        }
    }

}

void Map::calcNeighbors() {

    for(int i = 0; i < width*height;i++){
        fields[i].setNeighbors(howManyBadNeighbors(i));
    }

}

int Map::howManyBadNeighbors(int pos) {

    if(!posOK(pos)){
        throw std::out_of_range("Position");
    }

    //special cases: the 4 corners
    if(pos == 0){//top left corner
        int arr[] = {1,static_cast<int>(width),static_cast<int>(width+1)};
        return checkForMines(arr,3);
    }else if(pos == width-1){//top right corner
        int arr[] = {static_cast<int>(width-2),static_cast<int>(width*2-2),static_cast<int>(width*2-1)};
        return checkForMines(arr,3);
    }else if(pos == width*height -1){//bottom right corner
        int arr[] = {static_cast<int>(width*(height-1)-1),static_cast<int>(width*(height-1)-2),static_cast<int>(width*height-2)};
        return checkForMines(arr,3);
    }else if(pos == width*(height-1)-1){//bottom left corner
        int arr[] = {static_cast<int>(width*(height-2)+1),static_cast<int>(width*(height-2)+2),static_cast<int>(width*(height-1)+2)};
        return checkForMines(arr,3);
    }
    //special cases: outer rows
    if(pos < width){//top row
        int arr[] = {pos-1,pos+1,static_cast<int>(pos-1+width),static_cast<int>(pos+width),static_cast<int>(pos+1+width)};
        return checkForMines(arr,5);
    }else if(pos % width == width-1){//right row
        int arr[] = {static_cast<int>(pos-width),static_cast<int>(pos-width-1),pos-1,static_cast<int>(pos+width-1),static_cast<int>(pos+width)};
        return checkForMines(arr,5);
    }else if(pos > (height - 1)*width){//bottom row
        int arr[] = {pos-1,pos+1,static_cast<int>(pos-1+width),static_cast<int>(pos+width),static_cast<int>(pos+1+width)};
        return checkForMines(arr,5);
    }else if(pos % width == 0){//left row
        int arr[] = {static_cast<int>(pos-width),static_cast<int>(pos-width+1),pos+1,static_cast<int>(pos+width+1),static_cast<int>(pos+width)};
        return checkForMines(arr,5);
    }

    int arr[] = {static_cast<int>(pos-width-1),static_cast<int>(pos-width),
                 static_cast<int>(pos-width+1),pos-1,pos+1,static_cast<int>(pos+width-1),
                 static_cast<int>(pos+width),static_cast<int>(pos+width+1)};
    return checkForMines(arr,8);

}

int Map::checkForMines(const int* neighborsPos, int n) {
    int erg = 0;
    for(int i = 0; i < n; i++){
        if(fields[neighborsPos[i]].isAMine()){
            erg++;
        }
    }
    return erg;
}

bool Map::posOK(int pos) const {
    return pos >= 0 && pos <= width*height;
}

void Map::initAllFields() {
    for(int i = 0; i < width*height; i++){
        fields[i] = Field();
    }
}

void Map::makeAllVisibile() {
    for(int i = 0; i < width*height;i++){
        fields[i].makeVisibil();
    }
}

std::string Map::toString() {
    std::string str;
    for(int i = 0; i < height*width;i++){
        str += fields[i].toString();
        str += " ";
    }
    return str;
}


