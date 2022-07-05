#include"GameScene.h"

GameScene::GameScene(std::string label, RenderWindow * window) : Scene(label,window){
    numPlayer = 0;
    event = new Event;
}

void GameScene::addPlayer(Player *& player){
    players[numPlayer] = *player;
    numPlayer++;
}

void GameScene::draw(){
    for(int i = 0; i < numPlayer; i++){
        window->draw(*players[i].getSprite());
    }
}

void GameScene::gameloop(){
    while(window->isOpen()){
        while (window->pollEvent(*event)){
            events();
        }
        
        window->clear();
        draw();
        window->display();
        players[0].update();
    }
}

void GameScene::events(){
    switch (event->type)
    {
    case Event::KeyPressed:
        // key pressed
        if(Keyboard::isKeyPressed(Keyboard::Left)){
            players[0].animateLeft();
            players[0].setSpeed({-players[0].walk,0});

        }else if(Keyboard::isKeyPressed(Keyboard::Right)){
            players[0].animateRight();
            players[0].setSpeed({players[0].walk,0});
        }
    break;
    case Event::KeyReleased:
        // key released
        if(event->key.code == Keyboard::Left){
            players[0].setSpeed({0,0});
            players[0].setFrame({0,2});

        }else if(event->key.code  == Keyboard::Right){
            players[0].setSpeed({0,0});
            players[0].setFrame({0,0});
        }
    break;
    case Event::Closed:
        exit(1);
    break;
    }
    
}

