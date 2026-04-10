#include <iostream>
#include <cmath>

int main() {
    const int size = 15;
    // Loop to generate spiral pattern
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            // Calculate distance and angle
            double distance = std::sqrt((i - size / 2.0) * (i - size / 2.0) + (j - size / 2.0) * (j - size / 2.0));
            double angle = std::atan2(j - size / 2.0, i - size / 2.0);
            // Spiral pattern logic
            if (static_cast<int>(distance) % 2 == 0) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}