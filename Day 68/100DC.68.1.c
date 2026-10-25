// Find the missing number in an array of size n containing numbers from 0 to n.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int expected = n * (n + 1) / 2;
    printf("%d\n", expected - sum);
    return 0;
}
