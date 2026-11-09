// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};

    for (enum TrafficLight color = RED; color <= GREEN; color++) {
        printf("%s=%d\n", colorNames[color], color);
    }

    return 0;
}
