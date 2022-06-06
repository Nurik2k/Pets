#include <iostream>
#include "Pets.h"
using namespace std;
#pragma once
class Parrot : public Pets
{
private:
	string name;
	string soundpar;
	string typepar;
public:
	Parrot (string nm, string tp, string sd);
	string Show();
	string Type();
	string Song();
};

CPP:
#include "Parrot.h"

Parrot::Parrot(string nm, string tp, string sd)
{
	name = nm;
	typepar = tp;
	soundpar = sd;
}

string Parrot::Show()
{
	return name;
}

string Parrot::Type()
{
	return typepar;
}

string Parrot::Song()
{
	return soundpar;
}
