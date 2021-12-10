#ifndef GOLD_H
#define GOLD_H
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>
#include "Item.h"

using namespace std;

class Gold: public Item{
public:
    Gold(int x, int y, int value);
    Gold(int x, int y);
    virtual char get_symbol();
	int     get_gold_type();
    void    set_pickup(bool b);
    bool    get_pickup();

public:
	static std::string GetName();

private:
    bool    pickup;
};

#endif