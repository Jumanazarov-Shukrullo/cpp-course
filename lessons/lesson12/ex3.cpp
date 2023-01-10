#include <iostream>
#include <complex>

/// struct, static, this

using namespace std;

struct Point {
    double x{};
    double y{};
    static int counter;

    Point() {
        cout << "Object constructed at: " << this << endl;
//        ++counter;
        std::cout << x << " " << y << std::endl;
    }
    Point(/**Point *this*/double x, double y) {
        this->x = x;
        this->y = y;
        ++counter;
    }
};

struct Line {
    Point p1;
    Point p2;
    Line(Point start_point, Point end_point) {
        this->p1 = start_point;
        this->p2 = end_point;
    }
    [[nodiscard]] double length() const {
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
    }
};

int Point::counter = 0;

int main() {
    Point p;
    int a;
    std::cout << a << std::endl;
    return 0;
}