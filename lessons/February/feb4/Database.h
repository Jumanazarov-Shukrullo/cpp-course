#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"
#include <fstream>


namespace Records {
    const int first_employee_number  { 1'000 };
    class Database {
    public:
        Employee& add_employee(const std::string &first_name, const std::string &last_name);

        Employee &get_employee(int employee_number);

        Employee &get_employee(const std::string &first_name, const std::string &last_name);

        void display_all();

        void display_current();

        void display_former();

        static auto get_number_of_rows();
    private:
        std::fstream m_file_;
        std::vector<Employee> m_employees_;
        int m_next_employee_number{first_employee_number};
    };
}



