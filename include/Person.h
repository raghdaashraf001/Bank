#pragma once
#include <iostream>
#include <string>
using namespace std;

//Validation Class:
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
//===================================================================================
//Person Class:
class Person
{
protected:
	//Attributes:
	string name;
	int id;
	string password;
    double balance;

public:
	//constructors:
	Person() {
		this->id = 0;
        this->balance = 0;
	}
	Person(string name, int id, string password,double balance) {
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
	void setName(string name) {
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
	void setbalance(double balance) {
		if (Validation::checkbalance(balance))
			this->balance = balance;
		else
			cout << "Min balance is 1500";
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
	double getbalance() {
		return balance;
	}
	//Methods:

	//Destructor
	~Person() {

	}
};

//===================================================================================
//Client Class
class Client:public Person {
private:

public:
	Client() {

	}
	Client(int id, string name, string password, double balance) :Person(name,id,password,balance){
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

	//getter

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


    void transfereTo(Client &c, double amount){
		if (amount <= balance){
			c.deposit(amount);
			balance -= amount;
		}
		else{
			cout << "Amount exceeded";
		}
	}


	void checkBalance() {
		cout << "Balance : " << balance << endl;
	}

};
//===================================================================================
//Employee Class:

class Employee:public Person {
protected:
    //Attributes
    double salary;
public:
    //Constructors:
	Employee() {
        this->salary = 0;
	}
	Employee(int id, string name, string password, double balance) :Person(name,id,password,balance){
		if (Validation::checkname(name))
			this->name = name;
		else
			cout << "name must be alphabetic chars and min size 5 and max size 20";

		this->id = id;

		if (Validation::checkPassword(password))
			this->password = password;
		else
			cout << " Password must be with min size 8 and max size 20";

		if (Validation::checksalary(salary))
			this->salary = salary;
		else
			cout << "Min Salary is 5000";
	}
	//Setters:

	//Getters:


};

//===================================================================================
//Admin Class:
class Admin:public Employee {
private:
    //Attributes:

public:
    //Constructors:
	Admin() {

	}
		Admin(int id, string name, string password, double balance) :Employee(){
		if (Validation::checkname(name))
			this->name = name;
		else
			cout << "name must be alphabetic chars and min size 5 and max size 20";

		this->id = id;

		if (Validation::checkPassword(password))
			this->password = password;
		else
			cout << " Password must be with min size 8 and max size 20";

		if (Validation::checksalary(balance))
			this->balance = balance;
		else
			cout << "Min Salary is 5000";
	}
	//Setters:

	//Getters:


};
//===================================================================================
