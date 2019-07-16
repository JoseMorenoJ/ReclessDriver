/*
	class GameObject: Base class for all the objects of the game.
		The game manager will interface with them.
*/

#include "GameObject.h"
#include <iostream>

//Operator ++ for the Game object type
EGameObject operator++(EGameObject const e)
{
    switch (e) {
        case NO_INIT:
            return FIRE_HYDRANT;
        case FIRE_HYDRANT:
            return LETTER_BOX;
        case LETTER_BOX:
            return SEDAN;
        case SEDAN:
            return VAN;
        case VAN:
            return NO_INIT;
        default:
            return NO_INIT;
    }
}

//**************************************************************************************
//Constructor
GameObject::GameObject(): _active(false), _x(0), _y(0){}
	
//**************************************************************************************
//Destructor
GameObject::~GameObject() {}

//**************************************************************************************
//setters:
void GameObject::setName(std::string newName) { this->_name = newName; }
void GameObject::setTag(std::string newTag) { this->_tag = newTag; }
void GameObject::setType(EGameObject newType) { this->_type = newType; }
void GameObject::setX(unsigned int x) { this->_x = x; }
void GameObject::setY(unsigned int y) { this->_y = y; }

//**************************************************************************************
//Getters:
std::string GameObject::getName() const { return this->_name; }
std::string GameObject::getTag() const { return this->_tag; }
EGameObject GameObject::getType() const { return this->_type; }
unsigned int GameObject::getX() const { return this->_x; }
unsigned int GameObject::getY() const { return this->_y; }
bool GameObject::isActive() const { return _active; }

