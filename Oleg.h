class Class {
private:
	string prp1;
	string prp2;
	string prp3;
public:
	Class (string a,string b,string c){
		prp1 = a;
		prp2 = b;
		prp3 = c;
	}
	Class (){}
	void print() {
		cout << "Свойство 1: " << prp1 << endl;
		cout << "Свойство 2: " << prp2 << endl;
		cout << "Свойство 3: " << prp3 << endl;
	}
	void setPrp1(string s) {
		prp1 = s;
	}
	string getPrp1() {
		return prp1;
	}
	string getPrp2() {
		return prp2;
	}
};