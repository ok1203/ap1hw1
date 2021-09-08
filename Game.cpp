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
        case 1:    break;
        default:   break;
    }
};

bool Game::isPlaying() const{
    return playing;
}