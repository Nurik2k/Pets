#include <iostream>
#include "Pets.h"
using namespace std;
#pragma once
class Dog : public Pets
{
private:
	string name;
	string sounddog;
	string typedog;
public:
	Dog(string nm, string tp, string sd);
	string Show();
	string Type();
	string Song();

};

CPP:
#include "Dog.h"

Dog::Dog(string nm, string tp, string sd)
{
	name = nm;
	typedog = tp;
	sounddog = sd;
}

string Dog::Show()
{
	return name;
}

string Dog::Type()
{
	return typedog;
}

string Dog::Song()
{
	return sounddog;
}
