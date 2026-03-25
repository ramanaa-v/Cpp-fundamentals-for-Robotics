#include <iostream>

using namespace std;

int main() {

    int distance[] = {10, 20, 5, 30, 15};
    int max_distance = 25;

    for (int i = 0; i < 5; i++) {
        if (distance[i] > max_distance) {
            cout << "Distance exceed maximum limit. Stopping" << endl;
            break;
        }
        else if (distance[i] < 10) {
            cout << "Distance too short. Skipping iteration." << endl;
            continue;
        }
        cout << "Moving Robot: " << distance[i] << " units." << endl; 
    }

    return 0;
}