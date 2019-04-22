#pragma once
#define _CRT_SECURE_NO_WARNINGS

class Human
{
private:
	char name[15];
	char surname[20];
	char e_mail[50];
public:
	Human();
	Human(char*, char*, char*);
	Human(Human*);
	~Human();
	void SetName(char*);
	void SetSurname(char*);
	void SetEmail(char*);
	const char* GetName() const;
	const char* GetSurname() const;
	const char* GetEmail() const;
};

