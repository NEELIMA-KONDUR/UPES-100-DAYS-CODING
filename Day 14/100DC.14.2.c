// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long prod = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        prod *= i;
    }
    printf("%lld\n", prod);
    return 0;
}
