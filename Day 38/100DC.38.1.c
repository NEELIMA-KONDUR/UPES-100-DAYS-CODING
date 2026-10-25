// Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    printf("Enter first matrix elements:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    printf("Enter second matrix elements:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d%c", a[i][j] + b[i][j], (j == c1 - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
