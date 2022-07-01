#include"../Classes/Object.cpp"
#include<SFML/Graphics.hpp>
using namespace sf;

/* 
   scene is an object that have all the subobjects as: 
        - characters
        - obtacles
        - etc.
*/

class Scene : public Object
{
    protected:
        RenderWindow * myWindow;
        bool show;
    public:
        Scene();
        ~Scene(){}
        virtual void gameloop();
        void setWindow(RenderWindow * window);
        void turnView();
};

