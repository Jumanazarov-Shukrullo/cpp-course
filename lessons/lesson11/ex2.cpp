#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y;

    /// So here we can initialize them by initializer list
    explicit Point(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }
    void shift(/** Point *this */double x, double y) {
        this->x += x;
        this->y += y;
    }
};

struct Segment {
    Segment();

/// Member fields
    Point p1;
    Point p2;

    explicit Segment(double length) : p2(length, 0){}
    /// Methods
    [[nodiscard]] double length() const {
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;
        return std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));
    }
};

Segment::Segment() = default;

int main() {
    /// Default constructor
    Segment s1;
    Segment s2(10);
    /// Segment s3 = 10; /// error
}
