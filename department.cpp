#include <array>
#include <string>

#include "department.h"
#include "employee.h"


using namespace std;

//const int SIZE = 25;

    Department::department(){
        string id = " ";
        string name = " ";
        string dep_history = " ";
        //Employee emp[25] = {};
        array<Employee, SIZE> employees{};
    }

    void add_employee(Employee &emp_in){
        int size = 0;
        if(size < 25){
            employees[size] = emp_in;
            size++;
        }

    }

    // void remove_employee(Employee emp_in){

    // }

    string Department::get_id(){
        return id;
    }

    string Department::get_name(){
        return name;
    }

    void Department::set_name(string name_in){
        name = name_in;
    }

    string Department::get_dep_history(){
        return dep_history;
    }

    void Department::set_dep_history(string dep_history_in){
        dep_history = dep_history_in;
    }
