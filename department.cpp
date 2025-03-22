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

	//print all department info
    void Department::print_depInfo(){
      cout << "Department ID: " << print_depId() << endl;
      cout << "Department Name: " << print_depName()<< endl;
      cout << "Department Histories: " << print_depHistory() << endl;
    }
	//return dept info
    string Department::print_depId(){
    	return id;
    }
    string Department::print_depName(){
      	return name;
    }
    string Department::print_depHistory(){
      	return dep_history;
    }

    //initialize dept info
    void Department::set_depInfo(){
      cout << "Enter Department ID: "<<endl;
      getline(cin, id);
      cout << "Enter Department Name: "<<endl;
      getline(cin, name);
      cout << "Enter Department Histories: "<<endl;
      getline(cin, dep_history);
      print_depInfo();
    }

    //Add employee simply by add to next blank space array
    void Department::Add_employee(array<Employee, 25>& employees, int& real_size) {

    int old_size = real_size;
    int add_size;
    while (true) {
        cout<<"How many employee you want to add:"<<endl;
        cout <<"Current number of employee: "<<real_size<<endl;
        cin >>add_size;
        if (add_size + real_size > employee_max) {
            cout <<"Max employee is 25!"<<endl;
        }
        else if (add_size + real_size < employee_max) {
            break;
        }
    }
    real_size += add_size;

    for (int i = old_size; i < real_size; i++) {
        employees[i].set_Info(i);
    }
    printer(real_size, employees);

}

//Remove employee by set deleted space to null then shift left all data
//Also keep track of real employees number
void Department::Rm_employee(array<Employee, 25>& employees, int& real_size) {

    int choice_remove;

    cout<<"Enter No. of employees you want to remove: "<<endl;
    cin >> choice_remove;
    choice_remove--;

    employees[choice_remove] = Employee();
    for (int i = choice_remove; i < real_size-1; i++) {
        employees[i]=employees[i+1];
    }


    real_size--;

    cout <<"UPDATED EMPLOYEES LIST:"<<endl;
    printer(real_size, employees);


}

void Department::searchID(array<Employee, 25>& employees) {
    int search_id;
    cout<< "Enter employee ID: ";
    cin >> search_id;
    for (int i = 0; i < employees.size(); i++) {
        if (search_id == employees[i].getID()) {
            cout << "Employee found!"<<endl;
            employees[i].print_Info(i);
            break;
        }
        else {
            cout <<i+1 << ". Employee not identical!"<<endl;
        }
    }
}

//Use for initialize 5 employees
void Department::Initialize_employee(array<Employee, 25>& employees, int& real_size) {
    for (int i = 0; i < real_size; i++) {
        employees[i].set_Info(i);
    }

}

//Print all employees info
void Department::printer(int& real_size, array<Employee, 25>& employees) {
    cout<<"------------------------------"<<endl;
    for (int i = 0; i < real_size; i++) {
        employees[i].print_Info(i);
        cout<<"------------------"<<endl;
    }
}

//Print current employee number
int Department::EmpNum(int& real_size) {
  return real_size;
}
