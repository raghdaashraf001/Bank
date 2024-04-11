#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"
#include "Validation.h"
#include "Employee.h"
#include "FileManger.h"
#include "Admin.h"
#include<iomanip>

#include "Client.h"

using namespace std;


main(){
cout<<"Welcome to X Bank\n";
system("pause");
cout<<"Select Member:\n";





        //ofstream fout;
       // fout << endl;

       // FileManger oo;
       // oo.addClient();
       // fout <<oo.addClient() << endl;
       // fout.open("task2-1.txt");
       // fout <<oo.addClient() << endl;
       // cout << endl;




        int size=0;
    string name, pet, budget;
    cout << "Enter The Number Of Friends : \n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        ofstream fout;
        fout << endl;

        cout << "Enter His Budget : ";
        FileManger oo;
        oo.addClient();

        fout.open("task2-1.txt");
        fout <<oo.addClient() << endl;
        cout << endl;
    }
}
