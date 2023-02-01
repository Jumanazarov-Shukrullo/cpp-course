#include <iostream>

/// dynamic_cast in cpp

/// syntax dynamic_cast< new_type> (expression)

/// Dynamic cast is used at run time to find out correct downcast
/// Need at least one virtual function
/// if the cast is successful , dynamic cast returns a value of new_type
/// if not and new_type is a pointer_type then it returns nullptr
/// if not and new_type is a reference_type, then it throws std::bad_cast

using namespace std;


struct Entity {
    virtual void print_name() {}
};

struct Player : Entity {

};

struct Enemy: Entity {

};


int main() {
    Player* player = new Player();
    Entity* actual_enemy = new Enemy();

    Entity* actual_player = player;

    Player* p2 = dynamic_cast<Player*>(actual_player);
    Player* p3 = dynamic_cast<Player*>(actual_enemy);
    return 0;
}