// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int r, c, distinct = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    int n = (r < c) ? r : c;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    if (distinct) printf("True\n");
    else printf("False\n");
    return 0;
}
