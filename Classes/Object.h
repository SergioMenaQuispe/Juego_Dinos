
/*
    This is the main class, rest of classes are children of this class
*/

#include<SFML/Graphics.hpp>
using namespace sf;

class Object
{
protected:
    std::string label; /* label means name of the object*/
public:
    Object(/* args */);
    ~Object(){}
};

