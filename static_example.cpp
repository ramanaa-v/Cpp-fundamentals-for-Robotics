#include <iostream>

void increment_counter() {
    static int count = 0;
    count++;
    std::cout << "Counter: " << count << std::endl;
}

int main() {
    for (int i = 0; i < 5; i++) {
        increment_counter();
    }
    return 0;  
}