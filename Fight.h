#ifndef L1_IA2001_FIGHT_H
#define L1_IA2001_FIGHT_H
#include "Character.h"
#include "Enemy.h"
#include <iostream>
using namespace std;

class Fight {
public:
    Fight();
    void fightEventStart(Character character);
private:
    Character character;
    Enemy *enemy;

};


#endif //L1_IA2001_FIGHT_H
