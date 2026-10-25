// Find the first negative integer in each sliding window of size k (print 0 if none).
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k: ");
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        printf("%d%c", firstNeg, (i == n - k) ? '\n' : ' ');
    }
    return 0;
}
