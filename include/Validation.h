
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


    static string enterName(){
    string name;
    system("cls");
    cout<<"Enter Name: ";
    cin>>name;
    while (!validatename(name)){
        system("cls");
        cout<<"Invalid Name! \n";
        cout<<"Name Must Be 5 To 20 Alphabetic Characters. \n"<<endl;
        cout<<"Enter name \n";
        cin>>name;
    }
    return name;
    }




     static string enterPassword(){
    string password;
    system("cls");
    cout<<"Enter Password: ";
    cin>>password;
    while (!validatename(password)){
        system("cls");
        cout<<"Invalid Password! \n";
        cout<<"Password Must Be 8 To 20 Characters. \n"<<endl;
        cout<<"Enter Password \n";
        cin>>password;
    }
    return password;
    }

     static double enterBalance(){
    double balance;
    cout<<"Enter Balance: ";
    cin>>balance;
    while (balance<1500){
        system("cls");
        cout<<"Invalid Balance!\n";
        cout<<"Balance must be at least 1500.\n"<<endl;
        cout<<"Enter Balance\n";
        cin>>balance;
        }
    return balance;


    static double enterSalary(){
    double salary;
    cout <<"Enter Aalary: ";
    cin>>salary;
    while (salary<5000){
        system("cls");
        cout <<"Invalid Salary!\n ";
        cout <<"Salary must be at least 5000.\n "<<endl;
        cout <<"Enter Salary: ";
        cin>>salary;
    }
        return salary;

};
