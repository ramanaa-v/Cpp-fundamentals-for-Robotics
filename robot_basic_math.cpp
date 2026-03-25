#include <iostream>

using namespace std;

int main() {
    int motor_speed = 100; // Base speed
    int speed_increment = 20; // Speed adjustment

    // Addition
    int increased_speed = motor_speed + speed_increment;
    
    // Subtraction
    int decreased_speed = motor_speed - speed_increment;

    // Multiplication
    int double_speed = motor_speed * 2;

    // Division
    int half_speed = motor_speed / 2;

    // Modulus (remainder)
    int remainder = motor_speed % 30;

    // Output results
    cout << "Original Speed: " << motor_speed << endl;
    cout << "Increased Speed: " << increased_speed << endl;
    cout << "Decreased Speed: " << decreased_speed << endl;
    cout << "Double Speed: " << double_speed << endl;
    cout << "Half Speed: " << half_speed << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}