#include <iostream>
#include "Employee.h"

using std::cout;
using std::endl;
using std::cin;
using namespace Records;

int main() {
    cout << "Testing the Employee class." << endl;
    Employee emp{"Jane", "Doe"};
    emp.set_first_name("John");
    emp.set_last_name("Doe");
    emp.set_employee_number(73);
    emp.set_salary(50'000);
    emp.promote();
    emp.promote(50);
    emp.fire();
    emp.display();
    emp.hire();
    emp.display();
}