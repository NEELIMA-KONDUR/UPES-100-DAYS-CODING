// Find the pivot integer x from 1 to n such that sum(1..x) equals sum(x..n).
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    int total = n * (n + 1) / 2;
    int x = (int)round(sqrt(total));
    if (x * x == total)
        printf("%d\n", x);
    else
        printf("-1\n");
    return 0;
}
