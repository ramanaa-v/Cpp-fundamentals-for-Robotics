#include <iostream>

class Robot {
    public:
        virtual void move() {
            std::cout << "Robot is moving" << std::endl;
        }
}; 

class WheeledRobot : public Robot {
    public:
        void move() override {
            std::cout << "Wheeled robot is rolling" << std::endl;
        }
};
 
class LeggedRobot : public Robot {
    public:
        void move() override {
            std::cout << "Legged robot is walking" << std::endl;
        }
};


int main() {

    Robot* robot1 = new WheeledRobot();
    Robot* robot2 = new LeggedRobot();

    robot1->move();
    robot2->move();

    delete robot1;
    delete robot2;

    return 0;
}