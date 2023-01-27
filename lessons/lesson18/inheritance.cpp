#include <iostream>

//class Car {
//private:
//    int speed_ {};
//public:
//    void run() {
//        std::cout << "car is running...\n";
//    }
//
//    int getSpeed() {
//        return speed_;
//    }
//
//    void setSpeed(int speed)  {
//        speed_ = speed;
//    }
//};
//
//class Gentra : public Car {
//
//};
//
//class Damas : public Car {
//
//};


#include <iostream>
#include <string>


class Camp{
    bool up = true;
    bool down = false;

public:
    void lower(){
        if(up)
            std::cout << "comper is lower" << std::endl;
    }
    void upper(){
        if(down)
            std::cout << "comper is upper" << std::endl;
    }

};
class lm : public Camp {

};


int main() {
   lm s;
    s.Camp::lower();
    return 0;
}