#include "Game.h"


int countOption =0;

int main() {
    Game game1;

    while (game1.isPlaying()) {
        game1.mainMenu();
    }
    cout<<countOption;

    return 0;
}
