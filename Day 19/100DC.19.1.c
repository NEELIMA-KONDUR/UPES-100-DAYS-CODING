// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("%d\n", (a * b) / x);
    return 0;
}
