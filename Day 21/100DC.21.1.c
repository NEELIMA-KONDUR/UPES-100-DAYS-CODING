// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, p, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }
    last = n % 10;
    digits = (int)log10(n);
    p = (int)round(pow(10, digits));
    first = n / p;
    swapped = last * p + (n % p - last) + first;
    printf("%d\n", swapped);
    return 0;
}
