#pragma once
#include <iostream>
#include <string>
using namespace std;
class Baton {
private:
	string recipe;
	string testo;
	string name;
	int price;
public:
	Baton(string recipe, string testo, string name, int price) :
		recipe(recipe), testo(testo), name(name), price(price) {}
	Baton(){}
	void Print() {
		cout << "Name: " << name << "\n" <<
			"Recipe: " << recipe << "\n" <<
			"Testo: " << testo << "\n" <<
			"Price: " << price << endl;
	}
};