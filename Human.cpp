#include "Human.h"
#include <string.h>


Human::Human()
{
}

Human::Human(char *name, char * surname, char * e_mail)
{
	SetName(name);
	SetSurname(surname);
	SetEmail(e_mail);
}

Human::Human( Human * h)
{
	char  f[15];
	strcpy(f, h->GetName());
	SetName(f);
	char f2[20];
	strcpy(f2, h->GetSurname());
	SetSurname(f2);
	char f3[50];
	strcpy(f3, h->GetEmail());
	SetEmail(f3);
}


Human::~Human()
{
}

void Human::SetName(char * nam)
{
	strcpy(this->name, nam);
}

void Human::SetSurname( char *sur)
{
	strcpy(this->surname, sur);
}


void Human::SetEmail(char *email)
{
	strcpy(this->e_mail, email);
}

const char * Human::GetName() const
{
	return name;
}

const char * Human::GetSurname() const
{
	return surname;
}

const char * Human::GetEmail() const
{
	return e_mail;
}
