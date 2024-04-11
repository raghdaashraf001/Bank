#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <fstream>
#include "Validation.h"

using namespace std;


//FileManger Class
class FileManger :public Client{
private:
	//Attributes:
        string client;


public:
    //constructors:
    FileManger():Client() {
        this->balance = 0;
	}
	FileManger(string name,int id, string password, double balance) :Client(name,id,password,balance){
		setbalance( balance);
	}
    //Setters:

	//Getters:
	string getAllClients() {

    ifstream is;
    is.open("Client.txt");
    string line;
    while(getline (is,line)){
            cout<<line<<endl;
    }
    is.close();
	}

	string getAllEmployees() {
	     ifstream is;
    is.open("Employee.txt");
    string line;
    while(getline (is,line)){
            cout<<line<<endl;
    }
    is.close();
	}

	string getAllAdmins() {
	     ifstream is;
    is.open("Admin.txt");
    string line;
    while(getline (is,line)){
            cout<<line<<endl;
    }
    is.close();
	}
	//Methods:
        string addClient(){

    FileManger client;
    client.name="Raghda";
    client.id=101;
    client.password="10101";
    client.balance=4000.50;


            ofstream c;
            c.open("Client.txt",ios::app);
            c<<client.name<<" , "<<client.id<<" , "<< client.password<<" , "<<client.balance<<endl;
            c.close();

        }
        void addEmployee(){

      FileManger employee;
    employee.name="employee1";
    employee.id=555;
    employee.password="505050";
    employee.balance=40000.50;


            ofstream e;
            e.open("Employee.txt",ios::app);
            e<<employee.name<<" , "<<employee.id<<" , "<< employee.password<<" , "<<employee.balance<<endl;
            e.close();


        }
        void addAdmin(){
         FileManger admin;
    admin.name="admin1";
    admin.id=665;
    admin.password="554546";
    admin.balance=3500.50;


            ofstream a;
            a.open("Admin.txt",ios::app);
            a<<admin.name<<" , "<<admin.id<<" , "<< admin.password<<" , "<<admin.balance<<endl;
            a.close();

        }
        string removeAllClients(){
            std::ofstream ofs;
            ofs.open("Client.txt", ofstream::out | ofstream::trunc);
            ofs.close();
            return "All Clients Have Been Deleted!";

        }
        string removeAllEmployees(){
            std::ofstream ofs;
            ofs.open("Employee.txt", ofstream::out | ofstream::trunc);
            ofs.close();
            return "All Employees Have Been Deleted!";

        }
        string removeAllAdmins(){
            std::ofstream ofs;
            ofs.open("Admin.txt", ofstream::out | ofstream::trunc);
            ofs.close();
            return "All Admins Have Been Deleted!";
        }
};
