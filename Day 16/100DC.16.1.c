// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n;
    long long bin = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        bin += (n % 2) * place;
        n /= 2;
        place *= 10;
    }
    printf("%lld\n", bin);
    return 0;
}
