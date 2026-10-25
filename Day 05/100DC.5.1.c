// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    double si = (p * r * t) / 100.0;
    double ci = p * pow((1 + r / 100.0), t) - p;
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", si, ci);
    return 0;
}
