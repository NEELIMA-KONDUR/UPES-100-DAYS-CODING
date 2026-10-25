// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) sum += mat[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}
