#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation
{
public:
	static bool checkname(string n) {
		int count = 0;
		for (int i = 0;i < n.size();i++) {
			if (n[i] >= 'A' && n[i] <= 'Z' || n[i] >= 'a' && n[i] <= 'z')
				count++;
		}
		if (count < n.size()) {
			return false;
		}
		if (count < 5) {
			return false;
		}
		else if (count > 20) {
			return false;
		}
		else
			return true;
	}
	static bool checkPassword(string p) {
		int count = 0;
		for (int i = 0;i < p.size();i++) {
			if (p[i] >= 'A' && p[i] <= 'Z' || p[i] >= 'a' && p[i] <= 'z')
				count++;
		}
		if (count < 8) {
			return false;
		}
		else if (count > 20) {
			return false;
		}
		else
			return true;
	}
	static bool checkbalance(double b) {
		if (b < 1500) {
			return false;
		}
		else
			return true;
	}
	static bool checksalary(double s) {
		if (s < 5000) {
			return false;
		}
		else
			return true;
	}
};
class Person
{
protected:
	//Attributes:
	string name;
	int id;
	string password;
public:
	//constructors:
	Person() {
		this->id = 0;
	}
	Person(string name, int id, string password) {
		if (Validation::checkname(name))
			this->name = name;
		else
			cout << "name must be alphabetic chars and min size 5 and max size 20";

		this->id = id;

		if (Validation::checkPassword(password))
			this->password = password;
		else
			cout << " Password must be with min size 8 and max size 20";
	}

	//setters
	void setName(string n) {
		if (Validation::checkname(name))
			this->name = name;
		else
			cout << "name must be alphabetic chars and min size 5 and max size 20";
	}
	void setId(int id) {
		this->id = id;
	}
	void setPassword(string password) {
		if (Validation::checkPassword(password))
			this->password = password;
		else
			cout << " Password must be with min size 8 and max size 20";
	}
	//Getters:
	string getName() {
		return name;
	}
	int getId() {
		return id;
	}
	string getPassword() {
		return password;
	}
	//Methods:

	//Destructor
	~Person() {

	}
};



class Client:public Person {
private:
	double balance;
public:
    //constructors:
	Client() {
		this->balance = 0;
	}
	Client(int id, string n, string p, double b):Person(id ,name,password) {
		if (Validation::checkname(name))
			this->name = name;
		else
			cout << "name must be alphabetic chars and min size 5 and max size 20";

		this->id = id;

		if (Validation::checkPassword(password))
			this->password = password;
		else
			cout << " Password must be with min size 8 and max size 20";

		if (Validation::checkbalance(balance))
			this->balance = balance;
		else
			cout << "Min balance is 1500";
	}
	//setter

	void setbalance(double b) {
		if (Validation::checkbalance(b))
			this->balance = balance;
		else
			cout << "Min balance is 1500";
	}

	//getter
	double getbalance() {
		return balance;
	}
	//methods:
	void deposit(double amount) {
		balance += amount;
	}
	void withdraw(double amount) {
		if (balance >= amount)
			balance -= amount;
		else
			cout << "Amount exceeded balance\n";
	}
	void transferTo(double amount, Client c1) {
		if (balance >= amount)
			balance -= amount;
		else
			cout << "Amount exceeded balance\n";
		c1.deposit(amount);
	}
	void checkBalance() {
		cout << "Balance : " << balance << endl;
	}

};
