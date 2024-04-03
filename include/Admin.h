#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
#include "Validation.h"

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

};
