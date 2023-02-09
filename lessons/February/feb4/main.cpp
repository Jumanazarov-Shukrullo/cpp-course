#include <iostream>
#include <stdexcept>
#include "Database.h"
#include <string>

using namespace Records;

int display_menu() {
    int selection;
    std::cout << std::endl;
    std::cout << "Employee Database" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << "1) Hire a new employee" << std::endl;
    std::cout << "2) Fire an employee" << std::endl;
    std::cout << "3) Promote an employee" << std::endl;
    std::cout << "4) List all employees" << std::endl;
    std::cout << "5) List all current employees" << std::endl;
    std::cout << "6) List all former employees" << std::endl;
    std::cout << "0) Quit" << std::endl;
    std::cout << std::endl;
    std::cout << "--->" << std::endl;
    std::cin >> selection;
    return selection;

}

void do_hire(Database &db) {
    std::string first_name;
    std::string last_name;

    std::cout << "Enter first name: ";
    std::cin >> first_name;
    std::cout << "Enter last name: ";
    std::cin >> last_name;

    auto& employee{ db.add_employee(first_name, last_name) };
    std::cout << "Hired employee: " << employee.get_first_name() << " " <<
              employee.get_last_name() << " with employee number: " << employee.get_employee_number() << "\n";
}

void do_fire(Database &db) {
    int employee_number;
    std::cout << "Enter employee number: ";
    std::cin >> employee_number;
    try {
        auto &employee{db.get_employee(employee_number)};
        employee.fire();
        std::cout << "Employee: " << employee_number << " fired\n";
    } catch (std::logic_error &error) {
        std::cerr << "Unable terminate: " << error.what() << "\n";
    }
}

void do_promote(Database &db) {
    int employee_number;
    std::cout << "Enter employee number: ";
    std::cin >> employee_number;

    int raise_amount;
    std::cout << "Enter the amount you want to raise: ";
    std::cin >> raise_amount;

    try {
        auto &em{ db.get_employee(employee_number) };
        em.promote(raise_amount);
    } catch (std::logic_error &error) {
        std::cerr << "Unable to promote: " << error.what() << "\n";
    }
}


void input_interface() {
    Database db;
    bool done{false};
    while (!done) {
        int selection{display_menu()};
        switch (selection) {
            case 0:
                done = true;
                break;
            case 1:
                do_hire(db);
                break;
            case 2:
                do_fire(db);
                break;
            case 3:
                do_promote(db);
                break;
            case 4:
                db.display_all();
                break;
            case 5:
                db.display_current();
                break;
            case 6:
                db.display_former();
                break;
            default:
                std::cerr << "Unknown command\n";
                break;
        }
    }
}


int main() {
    input_interface();
    return 0;
}