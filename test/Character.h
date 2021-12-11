#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Character {
    int attack;
    int defense;
    int max_hp;
    string race;
   public:
    int hp;
    int x_cor;
    int y_cor;
    int temp_atk;
    int temp_def;
    char symbol;
    Character(int x_cor, int y_cor);
    virtual ~Character();
    int get_hp();
    virtual void set_hp(int hp);
    int get_attack();
    void set_attack(int attack);
    int get_defense();
    void set_defense(int defense);
    int get_max_hp();
    void set_max_hp(int max_hp);
    void set_race(string r);
    string get_race();
    // this function will return the symbol representing this character
    virtual char get_symbol() = 0;
};

#endif