#include <iostream>

class Rectangle {
public:
    void setWidth(int width) {this->width_ = width;}
    void setHeight(int height) {this->height_ = height;}
    int getArea() const {
        return width_ * height_;
    }
private:
    int width_;
    int height_;
};

int main() {
    Rectangle r{};
    r.setWidth(5);
    r.setHeight(4);
    int area = r.getArea();
    std::cout << area << std::endl;
}