#include "Game.h"

Game::Game(){
    option = 0;
    playing = true;
};

void Game::mainMenu(){
    cout<<"Main Menu"<<endl;
    cout<<"1. Start adventure"<<endl;
    cout<<"0. Exit"<<endl<<endl;

    cout<<"Choose option: ";
    cin>>option;
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
                Item item("Wooden Sword", 2);
                character.gainExp(15);
                character.receiveItem(item);
                break;
            }
            case 2: {
                cout<<character.toStringCharacter()<<endl;
                break;
            }
            default:
                break;
        }
    }
}



bool Game::isPlaying() const{
    return playing;
}