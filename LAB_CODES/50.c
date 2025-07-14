//WAP to get and print the array elements using Pointer.
#include <stdio.h>
#include <stdlib.h>

void main(){

	printf("Enter the val of n :");
	int n = 0;
	scanf("%d" , &n);

	int *ptrInt = (int *)malloc(n * sizeof(int));
	
	printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptrInt[i]);
    }
    printf("You entered integers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptrInt[i]);
    }

	free(ptrInt);

}