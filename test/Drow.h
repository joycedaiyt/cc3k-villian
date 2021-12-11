#ifndef DROW_H
#define DROW_H
#include "Player.h"

class Drow: public Player {
    public:
    Drow(int x_cor, int y_cor, int chamber);
    ~Drow();
    int use_potion(string type, int effect) override;
};

#endif