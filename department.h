
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <array>
#include "employee.h"

using namespace std;

const int SIZE = 25;

class Department{
private:
    string id;
    string name;
    string dep_history;

    //Employee employees[25];

public:
    Department();
    void print_depInfo();
    void modify_depInfo();

};



#endif