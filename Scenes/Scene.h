#include"Object.h"
#include<SFML/Graphics.hpp>
using namespace sf;

#ifndef SCENE
#define SCENE

/* 
   scene is an object that have all the subobjects as: 
        - characters
        - obtacles
        - etc.
*/

class Scene : public Object
{
    private:
        RenderWindow * myWindow;
    public:
        Scene();
        ~Scene();
        void gameloop();
        void setWindow(RenderWindow * window);
};


#endif SCENE
