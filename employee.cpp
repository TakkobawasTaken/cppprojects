//employee.cpp
//member function
#include <iostream>
#include "employee.h"
#include <iomanip>
using namespace std;

Employee::Employee() {
    employeeId = 0;
    first_name = "";
    last_name = "";
    dob = "";
    address = "";
    year_hired = 0;
    salary = 0;
    tel_area = 0;
    tel_num = "";
}

void Employee::set_Info(int number){

    cout << "Please enter these data of No."<<number+1<<" employee in respectively order (separated by space): "<<endl;
    cout<<"[ID] [last name]"<<endl;
    cin >> employeeId >>last_name;
    cin.ignore();

    cout <<"[First name]"<<endl;
    getline(cin, first_name);

    cout<<"[Date of birth]"<<endl;
    getline(cin, dob);

    cout <<"[Hired year] [Salary]"<<endl;
    cin >> year_hired>>salary;
    cin.ignore();

    cout <<"[Address]"<<endl;
    getline(cin, address);

    cout <<"[Telephone area] [Telephone number]"<<endl;
    cin >>tel_area>>tel_num;

    cout <<"----------------------"<<endl;
}

void Employee::set_IdNum(int id){
    employeeId = id;
}

void Employee::set_firstName(string first) {
    first_name = first;
}

void Employee::set_lastName(string last) {
    last_name = last;
}

void Employee::set_hiredYear(int hired) {
    year_hired = hired;
}

void Employee::set_dob(string date) {
    dob = date;
}

void Employee::set_salary(double sal) {
    salary = sal;
}

void Employee::set_address(string add) {
    address = add;
}

void Employee::set_telArea(int area) {
    tel_area = area;
}

void Employee::set_telNum(string num) {
    tel_num = num;
}

string Employee::getLastname() {
    return last_name;
}

int Employee::getHiredyear() {
    return year_hired;
}

double Employee::getSalary() {
    return salary;
}

int Employee::getID() {
  return employeeId;
}

void Employee::print_Info(int num){
    cout<<"Employee No."<<num+1<<endl;
    cout << "Id: " << employeeId << endl;
    cout << "First Last Name: "<<first_name<<" "<<last_name<<endl;
    cout <<"Hired year: "<<year_hired<<endl;
    cout<<"Date of birth: "<<dob<<endl;
    cout << "Salary: "<<fixed<<setprecision(0)<<salary<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Telephone: "<<tel_area<<" "<<tel_num<<endl;
}