// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[20];
    enum TrafficLight signal;

    printf("Enter traffic light (RED, YELLOW, GREEN): ");
    scanf("%19s", input);

    // Match user input to enum value using basic character checks (Units I-IV)
    if (input[0] == 'R' || input[0] == 'r') {
        signal = RED;
    } else if (input[0] == 'Y' || input[0] == 'y') {
        signal = YELLOW;
    } else if (input[0] == 'G' || input[0] == 'g') {
        signal = GREEN;
    } else {
        printf("Invalid input!\n");
        return 1;
    }

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
