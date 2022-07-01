#include<SFML/Graphics.hpp>
#include"Object.h"
using namespace sf;

#ifndef SCENE_MANAGER
#define SCENE_MANAGER

/*
    Scene manager is not an scene, is the administrator of scenes,
    so is just child of object
*/

class SceneManager :public Object
{
    private:
        RenderWindow * myWindow;
    public:

    SceneManager(Vector2i dimensions, std::string title);
    ~SceneManager();
    RenderWindow * getWindow();
    void show(Scene *& scene);
};

#endif SCENE_MANAGER
