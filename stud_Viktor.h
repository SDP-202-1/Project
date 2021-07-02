#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

class Lion {
protected:
    string name;
    string age;
    string gender;
    string size;
public:
    Lion(string name, string age, string gender, string size) : name(name), age(age), gender(gender), size(size) {}
    Lion() {}
    void print()
    {
        cout << name << "\t" << age << "\t" << gender << "\t" << size << endl;
    }
};
void read(vector<unique_ptr<Lion>>& lv) {
    string temp;
    vector <string> s;
    ifstream file("lions.csv");
    for (int i = 0; i < CountInFile("lions.csv"); i++) {
        getline(file, temp);
        s = split(temp, ';');
        lv.push_back(unique_ptr<Lion>(new Lion(s[0], s[1], s[2], s[3])));
    }
}
vector<string> split(string str, int d) {
    vector<string> v;
    while (str.find(d) != -1) {
        v.push_back(str.substr(0, str.find(d)));
        str.erase(0, str.find(d) + 1);
    }
    v.push_back(str);
    return v;
}
int CountInFile(string filename) {
    int counter = 0; AAA
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
