//
// Created by marcf on 24.03.2022.
//


#include "Map.h"

Map::Map(int h, int w) {

    height = h;
    width = w;

    initializeMap();
}

Map::~Map() {

}

Field Map::getOneField(unsigned int h,unsigned int w) {
    return fields[(h)*width+w];
}

void Map::initializeMap() {
    //std::cout << "start initializeMap" << std::endl;
    initAllFields();
    //std::cout << "fields initialized" << std::endl;
    rollAMap();
    //std::cout << "All Mines placed" << std::endl;
    calcNeighbors();
    //std::cout << "NeighborMines counted" << std::endl;
}

void Map::initAllFields() {
    for(int i = 0; i < width*height; i++){
        fields.emplace_back();
    }
}

void Map::rollAMap() {

    //int minesToPlace = floor((height*width) / HOWMANYMINES + 0.5f);
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0.0, height*width);

    for(int i = 0; i < HOWMANYMINES; i++){
        int minePos = (int)dist(mt);
        //int neighbors = fields[minePos].lookUp();
        if(!fields[minePos].isAMine()){
            fields[minePos].makeItAMine();
            //std::cout << "Mine placed!" << std::endl;
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
        std::cout << "Uupsi" << std::endl;
        throw std::out_of_range("Position");
    }
    //std::cout << "Pos: " << pos << std::endl;

    //special cases: the 4 corners
    if(pos == 0){//top left corner
        std::vector<int> arr = {1,static_cast<int>(width),static_cast<int>(width+1)};
        return checkForMines(arr);
    }else if(pos == width-1){//top right corner
        std::vector<int> arr = {static_cast<int>(width-2),static_cast<int>(width*2-2),static_cast<int>(width*2-1)};
        return checkForMines(arr);
    }else if(pos == width*height -1){//bottom right corner
        std::vector<int> arr = {static_cast<int>(width*(height-1)-1),static_cast<int>(width*(height-1)-2),static_cast<int>(width*height-2)};
        return checkForMines(arr);
    }else if(pos == width*(height-1)-1){//bottom left corner
        std::vector<int> arr = {static_cast<int>(width*(height-2)+1),static_cast<int>(width*(height-2)+2),static_cast<int>(width*(height-1)+2)};
        return checkForMines(arr);
    }
    //special cases: outer rows
    if(pos < width){//top row
        std::vector<int> arr = {pos-1,pos+1,static_cast<int>(pos-1+width),static_cast<int>(pos+width),static_cast<int>(pos+1+width)};
        return checkForMines(arr);
    }else if(pos % width == width-1){//right row
        std::vector<int> arr = {static_cast<int>(pos-width),static_cast<int>(pos-width-1),pos-1,static_cast<int>(pos+width-1),static_cast<int>(pos+width)};
        return checkForMines(arr);
    }else if(pos > (height - 1)*width-1){//bottom row
        std::vector<int> arr = {pos-1,pos+1,static_cast<int>(pos-1-width),static_cast<int>(pos-width),static_cast<int>(pos+1-width)};
        return checkForMines(arr);
    }else if(pos % width == 0){//left row
        std::vector<int> arr = {static_cast<int>(pos-width),static_cast<int>(pos-width+1),pos+1,static_cast<int>(pos+width+1),static_cast<int>(pos+width)};
        return checkForMines(arr);
    }

    std::vector<int> arr = {static_cast<int>(pos-width-1),static_cast<int>(pos-width),
                 static_cast<int>(pos-width+1),pos-1,pos+1,static_cast<int>(pos+width-1),
                 static_cast<int>(pos+width),static_cast<int>(pos+width+1)};
    return checkForMines(arr);

}

int Map::checkForMines(const std::vector<int>& neighborsPos) {
    int erg = 0;
    for(int neighborsPo : neighborsPos){
        if(fields[neighborsPo].isAMine()){
            erg++;
        }
    }
    return erg;
}

bool Map::posOK(int pos) const {
    return pos >= 0 && pos <= width*height;
}

void Map::makeAllVisible() {
    for(int i = 0; i < width*height;i++){
        fields[i].makeVisible();
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

int Map::lookOneUp(int h, int w) {
    return getOneField(h-1,w-1).lookUp();
}


