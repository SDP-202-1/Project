#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Gun {
public:
	Gun(string name, int damage, int quality, int number_cartridges) {
		name_ = name;
		damage_ = damage;
		quality_ = quality;
		number_cartridges_ = number_cartridges;
	}
	void Print() {
		cout << "Name: " << name_ << endl;
		cout << "Damage: " << damage_ << endl;
		cout << "Quality: " << quality_ << endl;
		cout << "Number cartridges: " << number_cartridges_ << endl;
	}
private:
	string name_;
	int damage_;
	int quality_;
	int number_cartridges_;
};