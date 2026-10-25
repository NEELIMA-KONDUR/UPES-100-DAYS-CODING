// Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for (int d = 0; d < r + c - 1; d++) {
        if (d % 2 == 0) {
            int i = (d < r) ? d : r - 1;
            int j = d - i;
            while (i >= 0 && j < c) {
                printf("%d ", mat[i][j]);
                i--;
                j++;
            }
        } else {
            int j = (d < c) ? d : c - 1;
            int i = d - j;
            while (j >= 0 && i < r) {
                printf("%d ", mat[i][j]);
                i++;
                j--;
            }
        }
    }
    printf("\n");
    return 0;
}
