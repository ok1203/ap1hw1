#include "Game.h"

int main() {
    Game game1;

    while (game1.isPlaying()) {
        game1.mainMenu();
    }

    return 0;
}
