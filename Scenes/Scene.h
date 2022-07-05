#include<SFML/Graphics.hpp>
#include<iostream>
#include"../Classes/Object.cpp"
#include"../Player/Player.cpp"
using namespace sf;

class Scene : public Object
{
protected:
    RenderWindow * window;
public:
    Scene(std::string label, RenderWindow * window);
    ~Scene(){}
    virtual void draw();
};
