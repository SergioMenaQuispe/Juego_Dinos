#include<SFML/Graphics.hpp>
#include"Scene.cpp"

class GameScene : public Scene
{
private:
    
    int numPlayer;
    Player players[2];

    Event * event;

public:
    GameScene(std::string label, RenderWindow * window);
    ~GameScene(){}
    void draw();
    void addPlayer(Player *& player);
    void gameloop();
    void events();
};

