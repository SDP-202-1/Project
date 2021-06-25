#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class film {
private:
	string name;
	string director;
	int cost;
	string studio;
public:
	film(string name,string director,int cost,string studio) {
		this->name = name;
		this->director = director;
		this->cost = cost;
		this->studio = studio;

	}
	film(){}
	~film(){}
	void print() {
		cout << "Name of film:" << name << endl;
		cout << "director:" << director << endl;
		cout << "cost:" << cost << endl;
		cout << "studio:" << studio << endl;
	}
};