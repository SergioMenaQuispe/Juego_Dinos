#include"SceneManager.h"
#include"Scene.h"

SceneManager::SceneManager(Vector2i dimensions, std::string title){
    myWindow = new RenderWindow(VideoMode(dimensions.x,dimensions.y),title);
}

RenderWindow * SceneManager::getWindow(){
    return myWindow;
}

void SceneManager::show(Scene *& scene){
    scene->setWindow(myWindow);
}