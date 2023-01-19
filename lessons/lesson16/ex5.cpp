#include <iostream>

struct Point {
    double x;
    double y;
    Point (double x, double y){
        this->x=x;
        this->y=y;
    }
    Point(){
        x = 0.0;
        y = 0.0;
    }
};
struct Triangle{
    Point a;
    Point b;
    Point c;
    a = sqrt(pow((a.x-P2.x), 2)+ pow((P2.y-P1.y),2));
};




int main() {

    Point P1;
    std::cin>>P1.x>>P1.y;
    Point P2;
    std::cin>>P2.x>>P2.y;
    Point P3;
    std::cin>>P3.x>>P3.y;
//    Point P(3, 4);
//    Point P(0, 0);
//    Point a(3.0, 2.0);
//    Point b;
//    Point c;

    Triangle t = new Triangle(a,b,c);

    std::cout<<t.getPerimeter();
    return 0;
}