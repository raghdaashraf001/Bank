#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
#include "Validation.h"
#include <vector>

using namespace std;

//Admin Class:
class Admin:public Employee {
private:
    //Attributes:

public:
    //Constructors:
	Admin() :Employee(){

	}
		Admin( string name,int id, string password, double salary) :Employee(name ,id , password,salary){

	}
	//Setters:

	//Getters:

	//methods:
    void addEmployee(Employee& employee) {
		allEmployees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			if (eIt->getID() == id) return eIt._Ptr;
		}
		return NULL;
	}
	void editEmployee(int id, string name, string password, double salary) {
		searchEmployee(id)->setName(name);
		searchEmployee(id)->setPassword(password);
		searchEmployee(id)->setSalary(salary);
	}
	void listEmployee() {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			eIt->display();
			cout << "--------------------\n";
		}
	}
};
    static vector <Admin>allAdmins;
	static vector <Admin>::iterator aIt;
