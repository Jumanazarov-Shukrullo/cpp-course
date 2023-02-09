#include "Employee.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

namespace Records {
    Employee::Employee(const std::string &first_name, const std::string &last_name) : m_first_name_(first_name),
                                                                                      m_last_name_(last_name) {
    }

    void Employee::set_first_name(const std::string &name) {
        m_first_name_ = name;
    }

    const std::string &Employee::get_first_name() const {
        return m_first_name_;
    }

    void Employee::set_last_name(const std::string &name) {
        m_last_name_ = name;
    }

    const std::string &Employee::get_last_name() const {
        return m_last_name_;
    }

    void Employee::set_employee_number(int employee_number) {
        m_employee_number_ = employee_number;
    }

    int Employee::get_employee_number() const {
        return m_employee_number_;
    }

    void Employee::set_salary(int new_salary) {
        m_salary_ = new_salary;
    }

    int Employee::get_salary() const {
        return m_salary_;
    }

    void Employee::hire() {
        m_hired_ = true;
    }

    bool Employee::is_hired() const {
        return m_hired_;
    }

    void Employee::fire() {
        m_hired_ = false;
    }

    void Employee::promote(int raise_amount) {
        m_salary_ += raise_amount;
    }

    void Employee::demote(int demerit_amount) {
        m_salary_ -= demerit_amount;
    }

    void Employee::display() const {
        cout << "Fullname: " << m_first_name_ << " " << m_last_name_ << endl;
        cout << "Id: " << m_employee_number_ << endl;
        cout << "Salary: " << m_salary_ << endl;
        cout << "Status: " << (is_hired() ? "current" : "former") << endl;
    }
}