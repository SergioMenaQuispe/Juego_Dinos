#ifndef GAME_SCENE
#define GAME_SCENE

#include"GameScene.h"

GameScene::GameScene(Color color){
    this->color = color;
}

void GameScene::gameloop(){
    while (myWindow->isOpen()){
        myWindow->clear(color);
        myWindow->display();
    }    
}

#endif