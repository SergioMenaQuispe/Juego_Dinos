#include<SFML/Graphics.hpp>
#include<iostream>
#include"../Scenes/Scene.cpp"
#include"../Scenes/GameScene.cpp"
using namespace sf;



int main(){

    // main window
    RenderWindow * window = new RenderWindow({800,600},"Screen");

    // scene of the game
    GameScene * scene = new GameScene("Game scene",window);

    // create a player
    Player * player1 = new Player("spritesheet.png");


    // adding the player in the scene
    scene->addPlayer(player1);

    // loop the game
    scene->gameloop();


    


    return 0;
}