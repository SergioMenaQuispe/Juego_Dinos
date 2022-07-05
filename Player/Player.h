#include<SFML/Graphics.hpp>
#include"../Classes/Object.cpp"
using namespace sf;

class Player : public Object
{
private:
    Texture * texture;
    Sprite * sprite;

    // movement
    Vector2f position;
    Vector2f speed;
    bool walking;

    //frame
    Vector2i frameSelected;
    IntRect newFrame;
    Vector2i divisionSprite;

public:
    Player(){}
    Player(std::string label);
    ~Player(){}
    Sprite *& getSprite();

    // movement
    Vector2f getPos();
    void setPos(Vector2f position);
    void move(Vector2f movement);
    void setSpeed(Vector2f speed);
    float walk;
    void update();
    void setTranslation(Vector2f translation);

    // frame
    void setFrame(Vector2i nFrame);
    void animateRight();
    void animateLeft();
};

