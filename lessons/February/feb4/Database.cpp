#include "Database.h"
#include <stdexcept>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include <queue>

namespace Records {
    auto Database::get_number_of_rows() {
        std::ifstream file("my_database.csv");
        if (!file) {
            std::cout << "Error in opening file..\n";
            exit(1);
        }
        std::string line;
        int row_count = 0, row_id_x = 0;
        while (std::getline(file, line)) {
            ++row_count;
        }
        std::vector<std::vector<std::string>> data(row_count);
        file.clear();
        file.seekg(std::ifstream::beg);
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string value;
            while (std::getline(ss, value, ',')) {
                data[row_id_x].push_back(value);
            }
            ++row_id_x;
        }
        auto num_str = data[row_count - 1][0];
        int num;
        if (num_str == "ID" || num_str == " ") {
            num = -1;
        } else {
            num = std::stoi(num_str);
        }
        return num;
    }

    Employee &Database::add_employee(const std::string &first_name, const std::string &last_name) {
        Employee employee({first_name, last_name});
        auto num = get_number_of_rows();
        if (num == -1) {
            m_next_employee_number = first_employee_number;
        } else {
            m_next_employee_number = ++num;
        }
        employee.set_employee_number(m_next_employee_number);
        employee.hire();
        m_employees_.push_back(employee);
        std::cout << m_employees_[0].get_employee_number() << std::endl;
        m_file_.open("my_database.csv", std::ios::app);
        if (!m_file_) {
            std::cout << "Error in opening file..\n";
            exit(1);
        }
        m_file_ << employee.get_employee_number() << ",";
        m_file_ << employee.get_first_name() << ",";
        m_file_ << employee.get_last_name() << ",";
        m_file_ << employee.get_salary() << ",";
        m_file_ << (employee.is_hired() ? "Current" : "Former") << "\n";
        m_file_.close();
        return m_employees_.back();
    }

    Employee &Database::get_employee(int employee_number) {
        m_file_.open("my_database.csv", std::ios::in);
        std::ofstream file("my_new_database.csv", std::ios::out);
        std::string line;
        int row_count = 0, row_id_x = 0;
        while (std::getline(m_file_, line)) {
            ++row_count;
        }
        std::vector<std::vector<std::string>> data(row_count);
        m_file_.clear();
        m_file_.seekg(std::ifstream::beg);
        while (std::getline(m_file_, line)) {
            std::stringstream ss(line);
            std::string value;
            while (std::getline(ss, value, ',')) {
                data[row_id_x].push_back(value);
            }
            ++row_id_x;
        }
        for (const auto &item: data) {
            int index_count = 0;
            int count_status = 0;
            for (const auto& i : item) {
                if (item[index_count] != "ID" && std::stoi(item[index_count]) == employee_number) {
                    ++count_status;
                }
                if (count_status == 5) {
                    auto &t = const_cast<std::string &>(i);
                    t = "Former";
                }
            }
            ++index_count;
        }
        for(const auto& item : data) {
            int counter = 0;
            for(const auto& i : item) {
                if (counter == 4) {
                    file << i;
                } else {
                    file << i << ",";
                }
                ++counter;
            }
            file << "\n";
        }
        remove("my_database.csv");
        rename("my_new_database.csv", "my_database.csv");
        file.close();
        m_file_.close();
        throw std::logic_error("Employee not found\n");
    }

    Employee &Database::get_employee(const std::string &first_name, const std::string &last_name) {
        for (auto &employee: m_employees_) {
            if (employee.get_first_name() == first_name && employee.get_last_name() == last_name) {
                return employee;
            }
        }
        throw std::logic_error("Employee not found\n");
    }

    void Database::display_all() {
        m_file_.open("my_database.csv", std::ios::in);
        if (!m_file_) {
            std::cout << "Error in opening file..\n";
            exit(1);
        }
        std::string line;
        while (getline(m_file_, line)) {
            std::cout << line << std::endl;
        }
        m_file_.close();
    }


    void Database::display_current() {
        m_file_.open("my_database.csv", std::ios::in);
        if (!m_file_) {
            std::cout << "Error in opening file..\n";
            exit(1);
        }
        std::string line;
        while (getline(m_file_, line)) {
            std::stringstream ss(line);
            std::string temp;
            int counter = 0;
            while (std::getline(ss, temp, ',')) {
                ++counter;
                if (counter == 5) {
                    if (temp == "Current" || temp == "Status") {
                        std::cout << line << std::endl;
                    }
                }
            }
        }
        m_file_.close();
    }

    void Database::display_former() {
        m_file_.open("my_database.csv", std::ios::in);
        if (!m_file_) {
            std::cout << "Error in opening file..\n";
            exit(1);
        }
        std::string line;
        while (getline(m_file_, line)) {
            std::stringstream ss(line);
            std::string temp;
            int counter = 0;
            while (std::getline(ss, temp, ',')) {
                ++counter;
                if (counter == 5) {
                    if (temp == "Former" || temp == "Status") {
                        std::cout << line << std::endl;
                    }
                }
            }
        }
        m_file_.close();
    }

}
