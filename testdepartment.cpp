#include <iostream>
#include "employee.h"
#include "department.h"


Department dept;

void modify_dept();

int main(){
dept.set_depInfo();
    modify_dept();
}

void modify_dept(){
    while (true) {
        string choice_modify_dept;
        cout << "Do you want to modify department info?(yes/no)"<<endl;
        cin >> choice_modify_dept;
        cin.ignore();

        if (choice_modify_dept == "yes") {
            cout<<"New Department Info:"<<endl;
            dept.set_depInfo();
        }
        else if (choice_modify_dept == "no") {
            exit(0);
        }
        else {
            cout << "Invalid Choice" << endl;
        }
    }
}