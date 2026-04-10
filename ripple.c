#include <stdio.h>
#include <math.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20
void drawRipple();
void drawRipple() {
    double centerX = WIDTH / 2.0;
    double centerY = HEIGHT / 2.0;
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // Calculate the distance from the current position to the center
            double distance = sqrt(pow(x - centerX, 2) + pow(y - centerY, 2));
            // Use the sine function to create the ripple effect
            int intensity = (int)(10 * sin(distance / 2.0 - (double)time(NULL) / 10.0));
            // Map intensity to character
            if (intensity > 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    drawRipple();
    return 0;
}
