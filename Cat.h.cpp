#include <iostream>
#include "Pets.h"
using namespace std;

#pragma once
class Cat : public Pets
{
private:
	string name;
	string soundcat;
	string typecat;
public:
	Cat(string nm, string tp, string sd);
	string Show();
	string Type();
	string Song();
	
};
CPP:

#include "Cat.h"

Cat::Cat(string nm, string tp, string sd)
{
	name = nm;
	soundcat = sd;
	typecat = tp;
}

string Cat::Show()
{
	return name;
}

string Cat::Type()
{
	return typecat;
}

string Cat::Song()
{
	return soundcat;
}


