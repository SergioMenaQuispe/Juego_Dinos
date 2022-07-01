#include<SFML/Graphics.hpp>
#include"../Classes/Object.cpp"
using namespace sf;

/*
    Scene manager is not an scene, is the administrator of scenes,
    so is just child of object
*/

class SceneManager : public Object
{
    private:
        RenderWindow * myWindow;
    public:

    SceneManager(Vector2i dimensions, std::string title);
    ~SceneManager();
    RenderWindow * getWindow();
    void show(Scene *& scene);
    void stopShow(Scene *& scene);

};

