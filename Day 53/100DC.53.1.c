// Calculate the pivot index of an array where left sum equals right sum.
#include <stdio.h>

int main() {
    int n, totalSum = 0, leftSum = 0, pivot = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }
    printf("%d\n", pivot);
    return 0;
}
