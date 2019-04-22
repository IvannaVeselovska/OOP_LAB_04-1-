#include "RailwayTicket.h"
#include "Human.h"

RailwayTicket::RailwayTicket()
{
}

RailwayTicket::RailwayTicket(Human passenger, int carriage)
{
	this->passenger = passenger;
	this->carriage = carriage;
}

RailwayTicket::~RailwayTicket()
{
}

void RailwayTicket::SetPassenger( Human * passenger)
{
	this->passenger = Human(passenger);
}

void RailwayTicket::SetCarriage(int carriage)
{
	this->carriage = carriage;
}

 Human RailwayTicket::GetPassenger() const
{
	return passenger;
}

const int RailwayTicket::GetCarriage() const
{
	return carriage;
}
