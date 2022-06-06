#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Homa.h"
#include "Parrot.h"
#include "Pets.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	Pets* cat1 = new Cat("Оскар", "Пушистый", "Мяу!");
	Pets* dog1 = new Dog("Мила", "Лохматая", "Гав!");
	Pets* homa1 = new Homa("Хома", "Грызун", "Не издает");
	Pets* par1 = new Parrot("Джек", "Говорливый", "Разговаривает");
	cout << "_______________________________" << endl;
	cout << "Кот: " << cat1->Show() << "||" << cat1->Type() << "||" << cat1->Song() << endl;
	cout << "_______________________________" << endl;
	cout << "Собака: " << dog1->Show() << " || " << dog1->Type() << " || " << dog1->Song() << endl;
	cout << "_______________________________" << endl;
	cout << "Хомяк: " << homa1->Show() << " || " << homa1->Type() << " || " << homa1->Song() << endl;
	cout << "_______________________________" << endl;
	cout << "Попугай: " << par1->Show() << " || " << par1->Type() << " || " << par1->Song() << endl;
	cout << "_______________________________" << endl;
}
