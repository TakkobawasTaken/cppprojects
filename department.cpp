#include <array>
#include <string>

#include "department.h"
#include "employee.h"


using namespace std;

//const int SIZE = 25;
    Department::Department(){
      id = "comp_eng";
      name = "Computer Engineering ";
      dep_history = "Founded in 2000";

    }

    void Department::print_depInfo(){
      cout << "Department ID: " << id << endl;
      cout << "Department Name: " << name << endl;
      cout << "Department Histories: " << dep_history << endl;
    }

    void Department::modify_depInfo(){
      cout << "Enter new Department ID: "<<endl;
      getline(cin, id);
      cout << "Enter new Department Name: "<<endl;
      getline(cin, name);
      cout << "Enter new Department Histories: "<<endl;
      getline(cin, dep_history);
      cout<<"Updated Department Info: "<<endl;
      print_depInfo();

    }
