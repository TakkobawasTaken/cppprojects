//employee.h
#pragma once
#include <string>
using namespace std;

class Employee {

public:
    Employee();
    void print_Info(int);
    void set_Info(int number);

    string getLastname();
    double getSalary();
    int getHiredyear();

    void set_IdNum(int);
    void set_firstName(string);
    void set_lastName(string);
    void set_hiredYear(int);
    void set_dob(string);
    void set_salary(double);
    void set_address(string);
    void set_telArea(int);
    void set_telNum(string);
    int getID();

private:

    int employeeId;
    string first_name;
    string last_name;
    string dob;
    string address;
    int year_hired;
    double salary;
    int tel_area;
    string tel_num;
};