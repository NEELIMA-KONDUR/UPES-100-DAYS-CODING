// Merge two sorted arrays into a single sorted array.
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int res[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];

    for (int x = 0; x < m + n; x++) {
        printf("%d%c", res[x], (x == m + n - 1) ? '\n' : ' ');
    }
    return 0;
}
