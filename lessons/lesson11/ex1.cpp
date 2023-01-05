#include <iostream>
#include <cmath>

double length(double x1, double y1, double x2, double y2);

bool intersects(double x11, double y11, double x12, double y12,
                double x21, double y21, double x22, double y22,
                double* xi, double *yi);

struct Point {
    double x;
    double y;
    static int counter;
};

struct Segment {
    Point p1;
    Point p2;
};

int Point::counter = 0;

double length(Segment s) {
    double dx = s.p1.x - s.p2.x;
    double dy = s.p1.y - s.p2.y;
    return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
}

bool intersects(Segment s1, Segment s2, Point *p);



int main() {
    Point p1 = {1.0, 2.0};
    Point p2 = {1.0, 2.0};
    Segment s = {p1, p2};
    return 0;
}