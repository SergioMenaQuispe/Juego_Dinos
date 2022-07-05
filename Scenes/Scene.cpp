#ifndef SCENE_H
#define SCENE_H

#include"Scene.h"

Scene::Scene(std::string label, RenderWindow * window){
    this->window = window;
    this->label = label;
}

void Scene::draw(){}

#endif