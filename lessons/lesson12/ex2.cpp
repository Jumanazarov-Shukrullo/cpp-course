#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
    double z;
};

struct Line {
    Point start_point;
    Point end_point;
    Point heigh_point;
};

double length(Point p1, Point p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

bool intersect(Line l1, Line l2, Line l3) {}


int main() {
    Point p1;
    p1.x = 3;
    p1.y = 4;
    Point p2;
    p2.x = 0;
    p2.y = 0;
    cout << length(p1, p2);
}