#include"Scene.h"

Scene::Scene(){
}

void Scene::setWindow(RenderWindow * window){
    this->myWindow = window;
}

void Scene::gameloop(){
    while (myWindow->isOpen()){
        myWindow->clear();
        myWindow->display();
    }
    
}