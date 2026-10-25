// Find the single repeated element in an integer array in one pass.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], visited[100000] = {0}, duplicate = -1;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (visited[arr[i]]) {
            duplicate = arr[i];
        }
        visited[arr[i]] = 1;
    }
    printf("%d\n", duplicate);
    return 0;
}
