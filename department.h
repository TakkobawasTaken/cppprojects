#pragma once
#include <iostream>
#include <array>
#include "employee.h"

using namespace std;


class Department{

public:
    Department();
    void print_depInfo();
    void set_depInfo();

private:
    string id;
    string name;
    string dep_history;

};



