// Find the first and last occurrence index of a target value in a sorted array.
#include <stdio.h>

int main() {
    int n, target, first = -1, last = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
