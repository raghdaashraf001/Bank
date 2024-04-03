#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
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
};
