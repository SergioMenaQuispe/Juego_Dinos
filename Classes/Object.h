/*
    This is the main class, rest of classes are children of this class
*/

#include<SFML/Graphics.hpp>
using namespace sf;

#ifndef OBJECT
#define OBJECT

class Object
{
    protected:
        char label; /* label means name of the object*/
    public:
        Object(/* args */);
        ~Object();
};



#endif OBJECT