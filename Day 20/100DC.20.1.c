// Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        int d = n % 10;
        if (d % 2 != 0)
            prod *= d;
        n /= 10;
    }
    printf("%d\n", prod);
    return 0;
}
