#include <iostream>
#include <iomanip>

int main() {
    
    double battery_voltage = 12.7343533252;

    std::cout << "Default precision: " << battery_voltage << std::endl;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Presicion set to 2 decimal places: " << battery_voltage << std::endl;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Presicion set to 5 decimal places: " << battery_voltage << std::endl;

    return 0;
}