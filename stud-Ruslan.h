#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> split(const string& input, char delim) {
    stringstream ss(input);
    string item;
    vector<string> result;
    while (getline(ss, item, delim))
        result.push_back(item);
    return result;
}

int CountInFile(string filename) {
    int counter = 0;
    char c;
    ifstream file;
    file.open(filename);
    while (!file.eof()) {
        file.get(c);
        if (c == '\n') counter++;
    }
    file.close();
    return counter - 1;
}

class Monkey {
private:
    string type, food, gender;
    int age;
public:
    Monkey(string type, string food, string gender, int age) : type(type), food(food), gender(gender), age(age) {}
    Monkey() {}
    void print() {
        cout << "Type: " + this->type +
            "\nFood: " + this->food +
            "\nGender: " + this->gender +
            "\nAge: " << this->age << endl;
    }
};

void Read(vector<Monkey>& monkeys) {
    int n = CountInFile("filename.csv");
    string str;
    vector<string> fields;
    ifstream file("filename.csv");
    for (int i = 0; i < n; i++) {
        getline(file, str, '\n');
        fields = split(str, ';');
        monkeys.push_back(Monkey(fields[0], fields[1], fields[2], stoi(fields[3])));
    }
    file.close();
}