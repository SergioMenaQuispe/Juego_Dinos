#ifndef PLAYER_H
#define PLAYER_H

#include "Player.h"

Player::Player(std::string label){
    
    // name of the texture
    this->label = label;

    // gettting an sprite
    texture = new Texture;
    texture->loadFromFile("Assets/" + label);
    sprite = new Sprite(*texture);

    // modify the sprite
    sprite->setScale({0.2,0.2});
    //sprite->setTextureRect

    // movement
    walking = false;
    walk = 0.5f;

    // frame
    // Spritesheet is a 2 x 2 texture images
    divisionSprite.x = 2;
    divisionSprite.y = 3;
    frameSelected = {0,0};
    setFrame(frameSelected);
    
}

Sprite *& Player::getSprite(){
    return sprite;
}

Vector2f Player::getPos(){
    return position;
}

void Player::setPos(Vector2f position){
    this->position = position;
    sprite->setPosition(position);
}

void Player::move(Vector2f movement){
    setPos(Vector2f(getPos().x + movement.x, getPos().y + movement.y));
}

void Player::setSpeed(Vector2f speed){
    this->speed = speed;
}

void Player::update(){
    setTranslation(speed);
}

void Player::setTranslation(Vector2f translation){
    position += translation;
    sprite->setPosition(position);
}

void Player::setFrame(Vector2i nFrame){
    frameSelected = nFrame;
    float width = sprite->getTexture()->getSize().x / divisionSprite.y;
    float height = sprite->getTexture()->getSize().y / divisionSprite.x;

    newFrame.left = nFrame.y * width;
    newFrame.top = nFrame.x * height;
    newFrame.width = width;
    newFrame.height = height;

    sprite->setTextureRect(newFrame);
}

void Player::animateRight(){
    frameSelected.y = 1;
    
    if(frameSelected.x == 0){
        frameSelected.x = 1;
    }else{
        frameSelected.x = 0;
    }
    setFrame(frameSelected);
}

void Player::animateLeft(){
    frameSelected.x = 1;
    if(frameSelected.y == 0){
        frameSelected.y = 2;
    }else{
        frameSelected.y = 0;
    }
    setFrame(frameSelected);
}

#endif
