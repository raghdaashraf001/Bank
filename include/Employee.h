#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
#include "Client.h"
#include <vector>
#include <iterator>
#include <fstream>
using namespace std;


//Employee Class:

class Employee:public Person {
protected:
    //Attributes
    double salary;
public:
    //Constructors:
	Employee() :Person(){
        this->salary = 0;
	}
	Employee( string name,int id, string password, double salary) :Person(name,id,password){
		setSalary(salary);
	}
	//Setters:
		setSalary(double salary){
		if(Validation::checksalary(salary))
            this->salary = salary;
        else
            cout<<"Min Salary is 5000"<<endl;
		}

	//Getters:
        double getSalary(){
        return salary;
    }
	//methods:
	void display() {
		Person::display();
		cout << "Salary : " << salary << endl;
	}
    void addClient(Client& client) {
		allClients.push_back(client);
	}
	Client* searchClient(int id) {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			if (clIt->getId() == id) return clIt._Ptr;
		}
		return NULL;
	}
	void listClient() {
		for (clIt = allClients.begin(); clIt != allClients.end(); clIt++) {
			clIt->display();
			cout << "-------------------------\n";
		}
	}
	void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPassword(password);
		searchClient(id)->setBalance(balance);
	}

};
	static vector <Employee>allEmployees;
	static vector <Employee>::iterator eIt;
