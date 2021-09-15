#include "Game.h"
//only cpp

extern int countOption;

Game::Game(){
    option = 0;
    playing = true;
};

void Game::mainMenu(){

    cout<<"Main Menu"<<endl;
    cout<<"1. Start adventure"<<endl;
    cout<<"0. Exit"<<endl<<endl;

    cout<<"Choose option: ";
    cin>>option; ++countOption;
    switch(option){
        case 0: playing = false; break;
        case 1: {
            string name;
            cout<<"Enter your name: ";
            cin>>name;
            character.initialize(name);
            startMenu();
            break;}
        default:   break;
    }
}
void Game::startMenu(){

    while (option !=0) {
        cout << "Play Menu" << endl;
        cout << "1. Explore" << endl;
        cout << "2. Show stats" << endl;
        cout << "0. Go back" << endl << endl;

        cout << "Choose option: ";
        cin >> option;
        switch (option) {
            case 0:
                break;
            case 1: {
                //trigger fight event
                Fight fight;
                fight.fightEventStart(character);

                Item item("Wooden Sword", 1);
                character.gainExp(15);
                character.receiveItem(item);
                break;
            }
            case 2: {
                cout<<character.toStringCharacter()<<endl;
                break;
            }
            default: {
                Item item("Secret Sword", 10);
                character.gainExp(15);
                character.receiveItem(item);
                break;
            }
        }
    }
}



bool Game::isPlaying() const{
    return playing;
}