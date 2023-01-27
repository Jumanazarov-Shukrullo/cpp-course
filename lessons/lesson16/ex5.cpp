#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

struct Point {
    double x;
    double y;
    explicit Point (double x = 0.0, double y = 0.0) : x(x), y(y) {}
};
struct Triangle {
    Point a, b, c;

    Triangle() = default;

    Triangle(const Point& a, const Point& b, const Point& c): a(a), b(b), c(c) {}

    [[nodiscard]] static double getDistance(const Point& p1, const Point& p2) {
        return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
    }

    [[nodiscard]] virtual double getPerimeter() const {
        double perimeter = getDistance(a, b) + getDistance(b, c) + getDistance(a, c);
        return perimeter;
    }

    [[nodiscard]] double getArea() const {
        double p = getPerimeter() / 2;
        double area = std::sqrt(p * (p - getDistance(a, b)) * (p - getDistance(b, c)) * (p - getDistance(a, c)));
        return area;
    }
};

struct Rectangle {
    Point a, b, c, d;

    Rectangle() = default;

    Rectangle(const Point& a, const Point& b, const Point& c, const Point& d): a(a), b(b), c(c),  d(d) {}

    [[nodiscard]] double getPerimeter() const  {
        double perimeter = (Triangle::getDistance(a, b) + Triangle::getDistance(b, c) +
                Triangle::getDistance(c, d) + Triangle::getDistance(d, a));
        return perimeter;
    }
    [[nodiscard]] double getArea() const  {
        Triangle t1(a, b, c);
        Triangle t2(a, d, c);
        double area = t1.getArea()  + t2.getArea();
        return area;
    }
    [[nodiscard]] std::vector<double> getAreasOfTriangles() const {
        std::vector<double> areas;
        // Calculate the slope and y-intercept of diagonal 1
        double m1 = (b.y - a.y) / (b.x - a.x);
        double b1 = a.y - (m1 * a.x);

        // Calculate the slope and y-intercept of diagonal 2
        double m2 = (d.y - c.y) / (d.x - c.x);
        double b2 = c.y - (m2 * c.x);
        Point point_of_intersection;
        // Use the equations of the diagonals to find the point of intersection
        point_of_intersection.x = (b2 - b1) / (m1 - m2);
        point_of_intersection.y = (m1 * point_of_intersection.x) + b1;

        Triangle t1(a, point_of_intersection, d);
        Triangle t2(c, point_of_intersection, d);

        areas.push_back(t1.getArea());
        areas.push_back(t2.getArea());
        return areas;
    }
};


int main() {
    Point a(0.0, 0.0), b(0.0, 4.0), c(4.0, 4.0), d(4.0, 0.0);
    Rectangle rec(a, b, c, d);
    std::cout << rec.getArea() << std::endl;
    const std::vector<double>& areas = rec.getAreasOfTriangles();
    for (auto &item : areas) {
        std::cout << item << " ";
    }
    return 0;
}

