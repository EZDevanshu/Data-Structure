//WAP to calculate the sum of n numbers using Pointer.

#include <stdio.h>
#include <stdlib.h>

void main(){

	printf("Enter the val of n :");
	int n = 0;
	scanf("%d" , &n);

	int *ptr = (int *)malloc(n *sizeof(int));
	
	printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    int largest = ptr[0];
     
    for (int i = 0; i < n; i++) {
        if(ptr[i] > largest){
            largest = ptr[i];
        }
    }

    printf("largest elemets is : %d ", largest);

	free(ptr);

}