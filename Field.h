//
// Created by Marc Fürup on 24.03.22.
//

#ifndef MINESWEEPER_FIELD_H
#define MINESWEEPER_FIELD_H

#include <iostream>
#include <sstream>

class Field {

    int neighbors;
    bool mine;
    bool lookedAt;

public:
    Field();

    void setNeighbors(int count);
    bool gotLookedAt() const{return lookedAt;}
    void makeItAMine(){mine = true;}
    bool isAMine() const{return mine;}

    int lookUp();
    int badNeighborsCount();

    void makeVisible();

    std::string toString();

};


#endif //MINESWEEPER_FIELD_H
