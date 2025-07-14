//. WAP to allocate and de-allocate memory for int, char and float variable at
//runtime.
#include<stdio.h>
#include<stdlib.h>

void main(){

	printf("Enter the val of n :");
	int n = 0;
	scanf("%d" , &n);

	int *ptrInt = (int *)malloc(sizeof(int));
	
	printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptrInt[i]);
    }
    printf("You entered integers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptrInt[i]);
    }

	free(ptrInt);

	float *ptrFloat = (float *)malloc(sizeof(float));
	
	  printf("Enter %d floats:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &ptrFloat[i]);
    }
    printf("You entered floats:\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", ptrFloat[i]);
    }

	free(ptrFloat);

	char *ptrChar = (char *)malloc(sizeof(char));

	printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ptrChar[i]);  
    } 
    printf("You entered characters:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", ptrChar[i]);
    }
	
	free(ptrChar);		
}