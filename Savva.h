#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

string generatePwd(int n = 10) {
	string newpwd;
	string s = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
	for (int i = 0; i < n; i++) {
		newpwd += s[rand() % s.length()];
	}
	return newpwd;
}

class Savva {
private:
	string name;
	int age;
	string email;
	string password;
public:
	Savva(string name, int age, string email, string password) :name(name), age(age), email(email), password(password) {}
	Savva() {}
	void print(){
		cout << name << "\t" << age << "\t" << email << "\t" << password << endl;
	}
	void genPassword(Savva& ss) {
		ss.password = generatePwd();
	}
	void BurthDay(Savva& ss) {
		ss.age++;
		cout << "Happy Burth Day" << endl;
		cout << "Your Turn " << ss.age << endl;
	}
	void emailSpam(Savva& ss) {
		int count;
		char choice;
		cout << "How Much Massages : "; cin >> count;
		cout << "Specify email name : Y or N"; cin >> choice;
		if (choice == 'Y')
			while (true)
				cout << "You spamed By " << ss.email << endl;
		else
			cout << "You spamed good luck" << endl;
	}
};