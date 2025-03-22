//Joseph Tchatchoua Nchuisseu ID: 40309336
//
//Department class description


#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <iostream>


using namespace std;


class Department{

public:
    //Member functions and default constructor of employee
    Department();
    void print_depInfo();
    void set_depInfo();

private:
    //attributes employee
    string id;
    string name;
    string dep_history;

};

#endif
