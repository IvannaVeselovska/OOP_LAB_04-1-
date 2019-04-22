#include "SecondClassTicket.h"
#include <string.h>
#include <string>
#include <conio.h>

using namespace std;


SecondClassTicket::SecondClassTicket()
{
}

SecondClassTicket::SecondClassTicket(Human passenger, int carriage, int place, double prise)
{
	SetPassenger(&passenger);
	SetCarriage(carriage);
	SetPlañe(place);
	SetPrise(prise);
}

SecondClassTicket::SecondClassTicket(SecondClassTicket * sourse)
{
	SetPassenger(&sourse->GetPassenger());
	SetCarriage(sourse->GetCarriage());
	SetPlañe(sourse->GetPlañe());
	SetPrise(sourse->GetPrise());
}


SecondClassTicket::~SecondClassTicket()
{
}

void SecondClassTicket::SetPlañe(int place)
{
	if (prise > 0 && prise < 53)
	{
		this->place = place;
	}
}

void SecondClassTicket::SetPrise(double prise)
{
	this->prise = prise;
}

const int SecondClassTicket::GetPlañe() const
{
	return this->place;
}

const double SecondClassTicket::GetPrise() const
{
	return this->prise;
}

char * SecondClassTicket::GetInformation(char * info) const
{
	if (this->place < 37)
	{
		 char a[] = "average ";
		strcpy(info, a);
	}
	else
	{
		char a[] = "lateral ";
		strcpy(info, a);
	}
	if (this->place % 2)
	{
		char a[] = "lower place";
		strcat(info, a);
	}
	else
	{
		char a[] = "upper place";
		strcat(info, a);
	}
	return info;
}

