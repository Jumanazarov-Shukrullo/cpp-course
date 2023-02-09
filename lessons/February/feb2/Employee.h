#include <string>

namespace Records {
    const int default_starting_salary{30'000};
    const int default_raise_and_demerit_amount{1000};

    class Employee {
    public:
        Employee(const std::string &first_name, const std::string &last_name);

        void promote(int raise_amount = default_raise_and_demerit_amount);

        void demote(int demerit_amount = default_raise_and_demerit_amount);

        void hire();

        void fire();

        void display() const;

        void set_first_name(const std::string &name);

        [[nodiscard]] const std::string &get_first_name() const;

        void set_last_name(const std::string &name);

        [[nodiscard]] const std::string &get_last_name() const;

        void set_employee_number(int employee_number);

        [[nodiscard]] int get_employee_number() const;

        void set_salary(int new_salary);

        [[nodiscard]] int get_salary() const;

        [[nodiscard]] bool is_hired() const;

    private:
        std::string m_first_name_;
        std::string m_last_name_;
        int m_employee_number_{-1};
        int m_salary_{default_starting_salary};
        bool m_hired_{false};
    };
}