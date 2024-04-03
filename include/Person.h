#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;


//===================================================================================
//Person Class:
class Person
{
protected:
	//Attributes:
	string name,password;
	int id;
   // double balance;

public:
	//constructors:
	Person() {
		this->id = 0;
	}
	Person(string name, int id, string password) {
		setName(name);
		setId(id);
		setPassword(password);
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
    void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"ID  : "<<id<<endl;
    cout<<"Password: "<<password<<endl;
    }
	//Destructor
	~Person() {

	}
};

