#include <iostream>
#include "Pets.h"
using namespace std;
#pragma once
class Homa : public Pets
{
private:
	string name;
	string soundhoma;
	string typehoma;
public:
	Homa(string nm, string tp, string sd);
	string Show();
	string Type();
	string Song();
};

CPP:
#include "Homa.h"

Homa::Homa(string nm, string tp, string sd)
{
	name = nm;
	typehoma = tp;
	soundhoma = sd;
}

string Homa::Show()
{
	return name;
}

string Homa::Type()
{
	return typehoma;
}

string Homa::Song()
{
	return soundhoma;
}
