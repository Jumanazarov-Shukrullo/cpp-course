#include <iostream>
#include <cmath>

double first_problem(const double& a, const double& b) {
    const double c = std::sqrt(a * a + b * b);
    return c;
}


double second_problem(const double& x1, const double& y1, const double& x2, const double& y2) {
    const double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    return distance;
}


void third_problem(int& a, int& b, int& c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}


void fourth_problem(const double& a, const double& b, const double& c, double* x1, double* x2) {
    const double d = std::pow(b, 2) - 4 * a * c;
    *x1 = (-b + (std::sqrt(d))) / 2 * a;
    *x2 = (-b - (std::sqrt(d))) / 2 * a;
}


void fifth_problem(int num) {
    for(ssize_t i = sizeof(int32_t) * 8 - 1; i >= 0; -- i) {
        std::cout << (num >> i & 1);
        if (i % 8 == 0) {
            std::cout << " ";
        }
    }
}


void swap() {
    int a = 3;
    int b = 6;
    a = a + b; // a = 7, b = 5
    b = a - b;
    a = a - b;
    std::cout<<a<< b;
}


void main_interface() {
//    double a, b;
//    std::cin >> a >> b;
//    const double c = first_problem(a, b);
//    std::cout << c << std::endl;

//    double x1, y1, x2, y2;
//    std::cin >> x1 >> y1 >> x2 >> y2;
//    const double distance = second_problem(x1, y1, x2, y2);
//    std::cout << distance << std::endl;

//    int a = 1;
//    int b = 2;
//    int c = 3;
//    std::cout << a << b << c << std::endl;
//    third_problem(a, b, c);
//    std::cout << a << b << c << std::endl;

//    const double a = 1;
//    const double b = 5;
//    const double c = 6;
//    double x1, x2;
//    fourth_problem(a, b, c, &x1, &x2);
//    std::cout << x1 << " " << x2 << std::endl;
    int a = 5;
    fifth_problem(32576);
    std::cout << std::endl << (5 << 2) << std::endl;
}


//void f() {
//    {
//        void g() {
//            std::cout << "hello from g" << std::endl;
//        }
//    }
//    std::cout << "hello 1" << std::endl;
//    {
//        g();
//        std::cout << "hello  2" << std::endl;
//    }
//    std::cout << "hello 3" << std::endl;
//}


//int main() {
//    // main_interface();
//    f();
//    return 0;
//}