#include "Character.h"

Character::Character() {
    name = "Player";
    maxHP = 10;
    HP  = maxHP;
    atk = 2;
    exp = 0;
    level =1;
}

void Character::initialize(string name){
    this->name=name;
    maxHP = 10;
    HP  = maxHP;
    atk = 2;
    exp = 0;
    level =1;
};

string Character::toStringCharacter(){
    string string1;
    string1 = "Name: "+name+"\n"+"HP: "+ to_string(HP)+"/"+ to_string(maxHP)+"\n"
    +"Atk: "+ to_string(atk)+"\n"+ "Exp: "+ to_string(exp)+"\n" +"Level "+ to_string(level);

    return string1;
};

void Character::levelUp(){
    if (exp>=level*10){
        level=level+1;
        exp=0;
        maxHP=maxHP+5;
        HP=maxHP;
        atk = atk+1;
    }
}

int Character::getExp() const {
    return exp;
}

void Character::setExp(int exp) {
    Character::exp = exp;
};
