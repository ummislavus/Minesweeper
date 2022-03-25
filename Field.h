//
// Created by Marc Fürup on 24.03.22.
//

#ifndef MINESWEEPER_FIELD_H
#define MINESWEEPER_FIELD_H


class Field {

    int neighbors;
    bool mine;
    bool lookedAt;

public:
    Field();

    void setNeighbors(int count);
    bool gotLookedAt() const{return lookedAt;}
    void makeItAMine(){mine = true;}
    bool isAMine(){return mine;}

    int lookUp();
    int badNeighborsCount();

    void makeVisibil();

    std::string toString();

};


#endif //MINESWEEPER_FIELD_H
