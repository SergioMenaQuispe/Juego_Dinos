#ifndef SCENE
#define SCENE

#include"Scene.h"

Scene::Scene(){

}

void Scene::setWindow(RenderWindow * window){
    this->myWindow = window;
    show = true;
}

void Scene::gameloop(){
    while (myWindow->isOpen() && show){
        myWindow->clear();
        myWindow->display();
    }    
}

void Scene::turnView(){
    show = !show;
}

#endif 
