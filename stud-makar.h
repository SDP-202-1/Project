#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Osa {
	int size;
	int levelOfFear;
	string name;
	bool isBad;
public:
	Osa(int size, int levelOfFear, string name, bool isBad) :
		size(size), levelOfFear(levelOfFear), name(name), isBad(isBad){}
	Osa(){}
	void Print() {
		cout << "Osa " << name << "\n"
			<< "Size: " << size << "\t" 
			<< "Level of fear: " << levelOfFear << "\t" 
			<< "Bad?" << boolalpha << isBad << endl;
	}
};

void Read(vector<Osa> o) {
	fstream file("filename");
	string s1, s2, s3, s4;
	for(int i = 0; i < 4 /*(fileSize("filename"))*/ ; i++){
		string s1, s2, s3, s4;
		getline(file, s1, ';');
		getline(file, s2, ';');
		getline(file, s3, ';');
		getline(file, s4);
		o.push_back(Osa(stoi(s1), stoi(s2), s3, stoi(s4)));
	}
	file.close();
}
