// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area=%.2f, Circumference=%.2f\n", 3.14159f * r * r, 2 * 3.14159f * r);
    return 0;
}
