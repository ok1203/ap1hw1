#include <iostream>
using namespace std;
#include "Character.h"
#include "Fight.h"
#ifndef L1_IA2001_GAME_H
#define L1_IA2001_GAME_H


class Game {
public:
    //Constructor
    Game();
    //Functions
    void mainMenu();
    bool isPlaying() const;

    //Fields
private:
    int option; // to navigate in Menus
    bool playing; // to check if player is playing the game?
    Character character;
    void startMenu();

};

#endif //L1_IA2001_GAME_H
