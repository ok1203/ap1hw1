#ifndef L1_IA2001_CHARACTER_H
#define L1_IA2001_CHARACTER_H
#include <string>
#include <iostream>
using namespace std;

class Character {
public:
    Character();
    void initialize(string name);
    string toStringCharacter();
    void levelUp();

    int getExp() const;

    void setExp(int exp);

private:
    string name;
    int HP;
    int maxHP;
    int atk;
    int exp;
    int level;

};


#endif //L1_IA2001_CHARACTER_H
