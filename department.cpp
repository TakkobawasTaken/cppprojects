#include <array>
#include <string>
#include "department.h"
#include "employee.h"
using namespace std;

    Department::Department(){
      id = " ";
      name = " ";
      dep_history = " ";
    }


    void Department::print_depInfo(){
      cout << "Department ID: " << id << endl;
      cout << "Department Name: " << name << endl;
      cout << "Department Histories: " << dep_history << endl;
    }

    void Department::set_depInfo(){
      cout << "Enter Department ID: "<<endl;
      getline(cin, id);
      cout << "Enter Department Name: "<<endl;
      getline(cin, name);
      cout << "Enter Department Histories: "<<endl;
      getline(cin, dep_history);
      print_depInfo();
    }
