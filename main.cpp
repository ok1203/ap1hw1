#include "Game.h"

int main() {
    Game game1;

    while (game1.isPlaying()) {
        game1.mainMenu();
    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
