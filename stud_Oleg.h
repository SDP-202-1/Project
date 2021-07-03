#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


class Dog {
	string name;
	string breed;
	int age;
	string color;
public:
	Dog(string name, string breed, int age, string color) :name(name), breed(breed), age(age), color(color) {}
	Dog() {}
	void print() {
		cout << "Name: " << name;
		cout << "\nBreed: " << breed;
		cout << "\nAge: " << age;
		cout << "\nColor: " << color;
	}
};

void read(vector<Dog>& d) {
	string s1, s2, s3, s4;
	fstream file("dog.csv");
	for (int i = 0; i < 2; i++) {
		getline(file, s1, ';');
		getline(file, s2, ';');
		getline(file, s3, ';');
		getline(file, s4);
		d.push_back(Dog(s1, s2, stoi(s3), s4));
	}
	file.close();
}

