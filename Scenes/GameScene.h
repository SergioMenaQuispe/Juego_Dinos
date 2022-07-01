#include"Scene.cpp"

class GameScene : public Scene
{
    private:
        Color color;
    public:
        GameScene(Color color);
        ~GameScene();
        void gameloop();
};
