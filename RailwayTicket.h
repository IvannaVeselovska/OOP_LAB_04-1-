#pragma once
#include "Human.h"

class RailwayTicket
{
private:
	Human passenger;
	int carriage;
public:
	RailwayTicket();
	RailwayTicket(Human,int);
	~RailwayTicket();
	void SetPassenger(Human *);
	void SetCarriage(int);
	Human GetPassenger() const;
	const int GetCarriage() const;
};

