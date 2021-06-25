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
	string concern;
	string model;
	string color;
	int hp;
	int wheel_size;
public:
	Car(string concern, string model, string color, int hp, int wheel_size) : concern(concern), model(model), color(color), hp(hp), wheel_size(wheel_size) {}
	Car() {}
	void move() { cout << "The car is going fast!" << endl; }
	void print() {
		cout << "Car charactristic: " << endl;
		cout << "Concern : " << concern << endl;
		cout << "Model : " << concern << endl;
		cout << "Horse power : " << hp << endl;
		cout << "Wheel_size : " << wheel_size << endl;
	}
};