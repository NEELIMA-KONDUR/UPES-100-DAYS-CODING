// Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    int m[n1 + n2];
    for (int i = 0; i < n1; i++) m[i] = a[i];
    for (int i = 0; i < n2; i++) m[n1 + i] = b[i];

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d%c", m[i], (i == n1 + n2 - 1) ? '\n' : ' ');
    }
    return 0;
}
