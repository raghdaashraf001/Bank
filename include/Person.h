#include <iostream>
#include <string>
using namespace std;


//Person Class:

class Person {
protected:
	//Attributes:
	string name;
    int id;
	string password;
public:

	//constructors:
	Person() {
	}
	Person(string name,int id, string password) {
        this->name=name;
        this->id=id;
        this->password=password;
	}

	//setters
	void setName(string name) {
        this->name=name;
	}
	void setId(int id) {
        this->id=id;
	}
    void setPassword(string password) {
        this->password=password;
	}
	//Getters:
	string getName() {
		return name;
	}
	int getId(){
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
