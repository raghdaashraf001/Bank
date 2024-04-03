#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"

using namespace std;


//Client Class
class Client:public Person {
private:
    double balance;

public:
	Client():Person() {
        this->balance = 0;
	}
	Client(string name,int id, string password, double balance) :Person(name,id,password){
		setbalance( balance);
	}
	//setter
        void setbalance(double balance) {
		if (Validation::checkbalance(balance))
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
	    if(amount>0)
		this->balance += amount;
	}
	void withdraw(double amount) {
		if (balance >= amount && amount>0)
			this->balance -= amount;
		else
			cout << "Amount exceeded balance\n";
	}


    void transfereTo(Client &c, double amount){
		if (amount <= balance){
			c.deposit(amount);
			withdraw(amount);
		}
		else{
			cout << "Amount exceeded";
		}
	}


	void checkBalance() {
		cout << "Balance : " << balance << endl;
	}

	void display() {
	    Person::display();
		cout << "Balance : " << balance << endl;

	}
};
