#include<SFML/Graphics.hpp>
#include"../Scenes/Scene.cpp"
#include"../Scene-Manager/SceneManager.cpp"
#include"../Scenes/GameScene.cpp"
using namespace sf;

int main(){

    SceneManager * manager = new SceneManager({800,600},"Mi ventana");

    Scene * scene1 = new Scene;
    Scene * scene2 = new GameScene(Color::Blue);

    
    manager->show(scene1);
    manager->stopShow(scene1);
    manager->show(scene2);



    return 0;
}