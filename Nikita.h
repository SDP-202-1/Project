#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Car {
private:
	string name;
	string model;
	int mileage;
	int power;
public:
	Car(string name, string model, int mileage, int power)
		:name(name), model(model), mileage(mileage), power(power) {}
	Car() {}
	void print() {
		cout << "Name: " << name << "Model: " << model << "ml: " << mileage << "Power: " << power << endl;
	}
	void Edit(Car& cs) {
		string name, model;
		int mileage, power;
		cin >> name;
		cs.name = name;
		cin >> model;
		cs.model = model;
		cin >> mileage;
		cs.mileage = mileage;
		cin >> power;
		cs.power = power;
	}
};

int main() {

}