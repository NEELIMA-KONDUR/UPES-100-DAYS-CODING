// Find two distinct indices in an array whose elements sum up to a target value.
#include <stdio.h>

int main() {
    int n, target, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) printf("-1 -1\n");
    return 0;
}
