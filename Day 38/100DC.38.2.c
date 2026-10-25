// Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int r, c, sym = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    if (r != c) sym = 0;
    else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (mat[i][j] != mat[j][i]) {
                    sym = 0;
                    break;
                }
            }
        }
    }
    if (sym) printf("True\n");
    else printf("False\n");
    return 0;
}
