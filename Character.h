#ifndef L1_IA2001_CHARACTER_H
#define L1_IA2001_CHARACTER_H
#include <string>
#include <iostream>
using namespace std;
#include "Item.h"

class Character {
public:
    Character();
    void initialize(string name);
    string toStringCharacter();
    void levelUp();
    void gainExp(int exp);

    int getExp() const;

    void setExp(int exp);
    void receiveItem(Item item);

private:
    string name;
    int HP;
    int maxHP;
    int atk;
    int exp;
    int level;
    Item arrItems[3];

};


#endif //L1_IA2001_CHARACTER_H
