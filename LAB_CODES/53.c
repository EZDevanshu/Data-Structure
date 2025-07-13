#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n ; i++) {
        bool swapped = false;
        for (int j = 1; j < n - i - 1; j++) {
           for (int j = 0; j < n - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
                swapped = true;
            }
        }
    }
        if (!swapped) {
            break;
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);
    return 0;
}