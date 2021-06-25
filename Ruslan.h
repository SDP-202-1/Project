#include <iostream>
#include <string>
using namespace std;
class User {
private:
	string login;
	string password;
	int age;
public:
	User(string login, string password, int age) : login(login), password(password), age(age){}
	User(){}
	void setLogin(string login) { this->login = login; }
	string getLogin() { return this->login; }
	void setPassword(string password) { this->password = password; }
	string getPassword() { return this->password; }
	void setAge(int age) { this->age = age; }
	int getAge() { return this->age; }
	void print() {
		cout << "Login: " + this->login + "\nPassword: " + this->password + "\nAge: " << this->age << endl;
	}
	bool validAge() {
		return this->age <= 105 && this->age > 0;
	}
	bool correctPassword() {
		return this->password.length() >= 8;
	}
};
