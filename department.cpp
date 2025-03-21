#include "department.h"
#include "employee.h"
#include <array>

using namespace std;

//const int SIZE = 25;




    department::department(){
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

    string get_id(){
        return id;
    }

    string get_name(){
        return name;
    }

    void set_name(string name_in){
        name = name_in;
    }

    string get_dep_history(){
        return dep_history;
    }

    void set_dep_history(string dep_history_in){
        dep_history = dep_history_in;
    }
