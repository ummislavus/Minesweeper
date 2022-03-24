//
// Created by marcf on 24.03.2022.
//

#include <cstdlib>
#include <stdexcept>
#include "Map.h"

Map::Map(int h, int w) {

    height = h;
    width = w;

    fields = (unsigned char*)malloc(h*w);
    initializeMap();
}

Map::~Map() {
    free(fields);
}

void Map::setOneField(char symb, int h, int w) {
    fields[(h-1)*width+w-1] = symb;
}

char Map::getOneField(int h, int w) {
    return fields[(h-1)*width+w-1];
}

void Map::initializeMap() {
    rollAMap();
    calcNeighbors();
}

void Map::rollAMap() {

    int minesToPlace = (height*width)/MAPMINERATIO;

    for(int i = 0; i < minesToPlace; i++){
        int minePos = rand() % height*width;
        if(fields[minePos] != 9){
            fields[minePos] = 9;
        }else{
            i--;
            continue;
        }
    }

}

void Map::calcNeighbors() {



}

int Map::howManyBadNeighbors(int pos) {

    if(!posOK(pos)){
        throw std::out_of_range("Position");
    }

    int badNeighbors = 0;

    //special cases: the 4 corners
    if(pos == 0){//top left corner

    }else if(pos == width-1){//top right corner

    }else if(pos == width*height -1){//bottom right corner

    }else if(pos == width*(height-1)-1){//bottom left corner

    }


    if(pos < width){//top row

    }if(pos % width == width-1){//right row

    }if(pos > (height - 1)*width){//bottom row

    }if(pos % width == 0){//left row

    }

    return badNeighbors;
}

bool Map::posOK(int pos) const {
    return pos > 0 && pos < width*height;
}

void Map::setAllFieldsTo(char c) {

    for(int i = 0; i < width*height; i++){
        fields[i] = c;
    }

}
