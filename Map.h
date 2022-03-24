//
// Created by marcf on 24.03.2022.
//

#ifndef MINESWEEPER_MAP_H
#define MINESWEEPER_MAP_H
#define MAPMINERATIO 6.25

class Map {
private:
    unsigned int height;
    unsigned int width;

    unsigned char* fields;

public:
    Map() = default;
    explicit Map(int h, int w);
    ~Map();

    void setOneField(char symb,int h,int w);
    char getOneField(int h,int w);

private:
    //Initializer
    void initializeMap();
    void rollAMap();
    void setAllFieldsTo(char c);
    void calcNeighbors();
    int howManyBadNeighbors(int pos);

    //Helper
    bool posOK(int pos) const;

};


#endif //MINESWEEPER_MAP_H
