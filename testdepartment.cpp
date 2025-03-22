//Joseph Tchatchoua Nchuisseu ID: 40309336
//Viet Dung Nguyen 40277173

#include <iostream>
#include <array>
#include "employee.h"
#include "department.h"

const int employee_max = 25;
int real_size = 0;

Department dept;
array<Employee, employee_max> employees;


void modify_dept();
void printer();
void Employee_editor();
void menu_choice();

int main(){
    dept.set_depInfo(); //set department INFO

    cout <<"Please enter 5 employee info to add them to this department: "<<endl;
    real_size +=5;//add initial employee size
    dept.Initialize_employee(employees, real_size);// call the initial employees function
    printer();//print info to screen

    menu_choice();

}

void menu_choice(){
    int menu_num;
    cout<<"------------------------------"<<endl;
    cout <<"Select an option:"<<endl;
    cout <<"1. Add employee"<<endl;
    cout <<"2. Remove employee"<<endl;
    cout <<"3. Modify department info"<<endl;
    cout<<"4. Output number of employees"<<endl;
    cout <<"5. Edit employee info"<<endl;
    cout <<"6. Show all employees info"<<endl;
    cout <<"7. Show department info"<<endl;
    cout <<"8. Output Department ID"<<endl;
    cout <<"9. Output Department Name"<<endl;
    cout <<"10. Output Department History"<<endl;
    cout<<"11. Search for an employee with ID"<<endl;
    cout <<"0. Exit"<<endl;
    cin >> menu_num;
    cin.ignore();

    switch (menu_num) {
        case 1: {
            dept.Add_employee(employees, real_size);
            menu_choice();
            break;
        }
        case 2: {
            dept.Rm_employee(employees, real_size);
            menu_choice();
            break;
        }
        case 3: {
            modify_dept();
            break;
        }
        case 4: {
            cout<<"------------------------------"<<endl;
            cout <<"Current number of employees: "<<dept.EmpNum(real_size)<<endl;
            menu_choice();
            break;
        }
        case 5: {
            Employee_editor();
            break;
        }
        case 6: {
            dept.printer(real_size, employees);
            break;
        }
        case 7: {
            dept.print_depInfo();
            menu_choice();
        }
        case 8: {
            cout<<"------------------------------"<<endl;
            cout<<"Department ID is: "<<endl;
            dept.print_depId();
            cout<<"------------------------------"<<endl;
            break;
        }
        case 9: {
            cout<<"------------------------------"<<endl;
            cout<<"Department Name is: "<<endl;
            dept.print_depName();
            cout<<"------------------------------"<<endl;
            break;
        }
        case 10: {
            cout<<"------------------------------"<<endl;
            cout<<"Department History is : "<<endl;
            dept.print_depHistory();
            cout<<"------------------------------"<<endl;
            break;
        }
        case 11: {
            dept.searchID(employees);
            menu_choice();
            break;
        }

        case 0: {
            exit(0);
        }
        default: {
            cout<<"Invalid input"<<endl;
            menu_choice();
        }
    }
}


void modify_dept() {
    //modify dept info
    cout<<"New Department Info:"<<endl;
    dept.set_depInfo();
    menu_choice();
}

void printer() {
    //use to print employee info
    cout<<"------------------------------"<<endl;
    for (int i = 0; i < real_size; i++) {
        employees[i].print_Info(i);
        cout<<"------------------"<<endl;
    }
    menu_choice();
}

void Employee_editor() { //modification of attributes of employee objects (in Q2)
    int emp_input;
    int emp_num;
    int modify_data;

    int modify_id;
    string modify_first;
    string modify_last;
    string modify_dob;
    string modify_add;
    int modify_year;
    double modify_salary;
    int modify_area;
    string modify_num;

    cout<<"Enter employee number to modify: "<<endl;
    for (int i = 0; i < real_size; i++) {
        cout<<"------------------"<<endl;
        cout<<i+1<<"."<<endl;
        cout<<"Employee ID: "<<employees[i].getID()<<endl;
        cout<<"Employee Last Name: "<<employees[i].getLastname()<<endl;
        cout<<"------------------"<<endl;
    }
    cin >> emp_input;
    emp_num = emp_input -1;

    cout <<"Enter employees you would like to modify: "<<endl;
    cout <<"1.[ID] \n2.[first name]\n3.[last name]\n4.[Date of birth]\n5.[Hired year]\n6.[Salary]\n7.[Address]\n8.[Telephone area]\n9.[Telephone number]"<<endl;
    cin >> modify_data;
    cin.ignore();

    switch(modify_data){
        case 1: {
            cout <<"Enter new ID for employee No."<<emp_num<<endl;
            cin>>modify_id;
            cin.ignore();
            employees[emp_num].set_IdNum(modify_id);
            break;
        }
        case 2: {
            cout <<"Enter new first name for employee No."<<emp_num<<endl;
            getline(cin,modify_first);
            employees[emp_num].set_firstName(modify_first);
            break;
        }
        case 3: {
            cout <<"Enter new last name for employee No."<<emp_num<<endl;
            cin>>modify_last;
            cin.ignore();
            employees[emp_num].set_lastName(modify_last);
            break;
        }
        case 4: {
            cout <<"Enter new hired year for employee No."<<emp_num<<endl;
            cin>>modify_year;
            cin.ignore();
            employees[emp_num].set_hiredYear(modify_year);
            break;
        }
        case 5: {
            cout <<"Enter new Date of birth for employee No."<<emp_num<<endl;
            getline(cin,modify_dob);
            employees[emp_num].set_dob(modify_dob);
            break;
        }
        case 6: {
            cout <<"Enter new salary for employee No."<<emp_num<<endl;
            cin>>modify_salary;
            cin.ignore();
            employees[emp_num].set_salary(modify_salary);
            break;
        }
        case 7: {
            cout <<"Enter new address for employee No."<<emp_num<<endl;
            cin>>modify_add;
            getline(cin,modify_add);
            employees[emp_num].set_address(modify_add);
            break;
        }
        case 8: {
            cout <<"Enter new telephone area for employee No."<<emp_num<<endl;
            cin>>modify_area;
            cin.ignore();
            employees[emp_num].set_telArea(modify_area);
            break;
        }
        case 9: {
            cout <<"Enter new telephone number for employee No."<<emp_num<<endl;
            getline(cin,modify_num);
            employees[emp_num].set_telNum(modify_num);
            break;
        }
    }
    cout<<"Updated info: "<<endl;
    printer();
    menu_choice();
}