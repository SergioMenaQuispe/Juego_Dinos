#ifndef SCENE_MANAGER
#define SCENE_MANAGER

#include"SceneManager.h"
#include"../Scenes/Scene.cpp"

SceneManager::SceneManager(Vector2i dimensions, std::string title){
    myWindow = new RenderWindow(VideoMode(dimensions.x,dimensions.y),title);
}

RenderWindow * SceneManager::getWindow(){
    return myWindow;
}

void SceneManager::show(Scene *& scene){
    scene->setWindow(myWindow);
    scene->gameloop();
}

void SceneManager::stopShow(Scene *& scene){
    scene->turnView();
    delete myWindow;
}


#endif 
