#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"

#include "Validation.h"

using namespace std;


//FileManger Class
class FileManger :public Client{
private:
	//Attributes:

public:
    //constructors:

    //Setters:
	//Getters:
	string getAllClients() {
	}
	string getAllEmployees() {
	}
	string getAllAdmins() {
	}
	//Methods:
        void addClient(){

        }
        void addEmployee(){

        }
        void addAdmin(){

        }
        void removeAllClients(){

        }
        void removeAllEmployees(){

        }
        void removeAllAdmins(){

        }
};
