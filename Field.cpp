//
// Created by Marc Fürup on 24.03.22.
//

#include <iostream>
#include <sstream>
#include "Field.h"

Field::Field() {
    neighbors = 0;
    mine = false;
    lookedAt = false;
}

void Field::setNeighbors(int count) {
    neighbors = count;
}

int Field::lookUp() {
    lookedAt = true;
    if(mine){
        std::cout << "KABOOM" << std::endl;
        return 9;
    }
    return neighbors;
}

int Field::badNeighborsCount() {
    if(lookedAt){
        if(mine){
            return 9;
        }
        return neighbors;
    }
    return -1;
}

void Field::makeVisibil(){
    lookedAt = true;
}

std::string Field::toString() {
    std::stringstream strstr;
    strstr << "Neighbors " << neighbors << std::boolalpha << " Mines: " << mine
    << " loockedAt: " << lookedAt << std::endl;
    return strstr.str();
}
