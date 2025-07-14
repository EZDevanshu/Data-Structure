#include <stdio.h>

void main() {
    int sr, sc, cr;

    printf("Enter number of rows for first matrix: ");
    scanf("%d", &sr);
    printf("Enter number of columns for first matrix (rows for second matrix): ");
    scanf("%d", &sc);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &cr);

    int arr[sr][sc], arr2[sc][cr], multi[sr][cr];

    printf("Enter elements for first matrix:\n");
    for (int row = 0; row < sr; row++) {
        for (int col = 0; col < sc; col++) {
            scanf("%d", &arr[row][col]);
        }
    }

    printf("Enter elements for second matrix:\n");
    for (int row = 0; row < sc; row++) {
        for (int col = 0; col < cr; col++) {
            scanf("%d", &arr2[row][col]);
        }
    }

    for (int row = 0; row < sr; row++) {
        for (int col = 0; col < cr; col++) {
            multi[row][col] = 0;
        }
    }

    for (int row = 0; row < sr; row++) {
        for (int col = 0; col < cr; col++) {
            for (int k = 0; k < sc; k++) {
                multi[row][col] += arr[row][k] * arr2[k][col];
            }
         }
    }

    printf("This is the multiplication matrix:\n");
    for (int row = 0; row < sr; row++) {
        for (int col = 0; col < cr; col++) {
            printf("%d ", multi[row][col]);
        }
        printf("\n");
    }
}