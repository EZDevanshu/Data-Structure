#include<stdio.h>

void main(){
    int size1;
    int size2;

    printf("Enter size of array 1 :");
    scanf("%d" , &size1);
    int arr1[size1];
    
    printf("Enter size of array 2 :");
    scanf("%d" , &size2);
    int arr2[size2];

    for(int i = 0 ; i < size1 ; i++){
        scanf("%d" , &arr1[i]);
    }

    for(int i = 0 ; i < size2 ; i++){
        scanf("%d" , &arr2[i]);
    }
    int newSize = size1 + size2;
    int newArray[newSize];

     for(int i = 0 ; i < size1 ; i++){
        newArray[i] = arr1[i];
     }
     for(int i = 0 ; i < size2 ; i++){
        newArray[size1 + 1] = arr2[i];
     }

     for(int i = 0 ; i < newSize ; i++){
        printf("%d" , newArray[i]);
     }
}