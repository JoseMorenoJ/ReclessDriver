/*
	class Sedan: behaviour of the traffic car type Sedan.
		Inherits from TrafficCar.
*/

#include <iostream>

#include "Sedan.h"
#include "Player.h"

namespace RecklessDriver {

	//This initializes the values with the constructor from TrafficCar
	Sedan::Sedan(int damage, int cash):TrafficCar(damage, cash) 
	{
		SetName("Sedan");
	}

	//default Destructor
	Sedan::~Sedan(){}

	void Sedan::OnCollision(const GameObject &other)
	{
		Player &p = (Player&)other;
		std::cout << "### COLLISION -> Sedan" << std::endl;
		p.ApplyDamage(this->GetDamage(), this->GetCash());
		this->Sparks();
		return;
	}

}//namespace RecklessDriver
