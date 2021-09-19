#include "Game.hpp"
#include "Shape.hpp"
#include <iostream>


int main(int argc, char *argv[]){
    TheGame::Game game("the game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 800, false);
    while(game._isRunning){
        game.handleEvents();
        game.update();
        game.render();
    }
    game.clean();

    return 1;
}