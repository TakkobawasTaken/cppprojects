
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <array>
#include "employee.h"

using namespace std;

const int SIZE = 25;

class department{
private:
    string id;
    string name;
    string dep_history;
    array<Employee, SIZE> employees;
    //Employee employees[25];

public:

    string get_id();
    string get_name();
    void set_name(string name_in);
    string get_dep_history();
    void set_dep_history(string dep_history_in);

};



#endif