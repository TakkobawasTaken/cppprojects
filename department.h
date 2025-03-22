#pragma once
#include "employee.h"
#include <iostream>


using namespace std;


class Department{

public:
    const int employee_max =25;
    Department();
    void print_depInfo();
    void set_depInfo();
    void Add_employee(array<Employee, 25>& employees, int& real_size);
    void Rm_employee(array<Employee, 25>& employees, int& real_size);

    void searchID(array<Employee, 25>& employees);
    void Initialize_employee(array<Employee, 25>& employees, int& real_size);

    void printer(int& real_size, array<Employee, 25>& employees);

    int EmpNum(int&);

    string print_depId();
    string print_depName();
    string print_depHistory();

private:
    string id;
    string name;
    string dep_history;

};



