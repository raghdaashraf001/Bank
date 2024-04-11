#ifndef FILESHELPER_H
#define FILESHELPER_H
#pragma once
#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <fstream>
#include "Validation.h"
#include "FilesHelper.h"

class FilesHelper
{
        private:

    public:
        FilesHelper();

        //Methods:


        static int getLast( ){

        ifstream is;
        is.open("ClientLastId.txt");
        string line;
        while(getline (is,line)){
            cout<<line<<endl;
        }
        is.close();
        }


};

#endif // FILESHELPER_H
