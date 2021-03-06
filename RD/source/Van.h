#pragma once
/*
	class Van: behaviour of the traffic car type Van.
		Inherits from TrafficCar.
*/

#include "TrafficCar.h"

class Van :
	public TrafficCar
{
public:
	Van();
	~Van();
    
    virtual void update() override;
	void onCollision(const GameObject &other) override;
};
