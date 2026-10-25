// Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    for (int i = 0; i <= n; i++) {
        printf("%d%c", arr[i], (i == n) ? '\n' : ' ');
    }
    return 0;
}
