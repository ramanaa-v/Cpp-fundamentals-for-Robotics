#include <iostream> 

using namespace std;

int main() {
    
    double battery_level = 0.75;
    bool obstacle_detected = true;

    if (battery_level > 0.5 && !obstacle_detected) {
        cout << "Robot is moving forward." << endl;
    }
    else if (battery_level > 0.5 && obstacle_detected) {
        cout << "Robot is avoiding the obstacle." << endl;
    }
    else {
        cout << "Robot is stopping due to low battery." << endl;
    }

    return 0;
}