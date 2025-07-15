// Write a program to delete a number from an array that is already sorted in an 
// ascending order. 

#include<stdio.h>

void main(){

    int size; 
    printf("Enter size of array :");
    scanf("%d" , &size);

    int arr[size];

    for(int i = 0 ; i < size ; i++){
        scanf("%d" ,&arr[i]);
    }
    for(int i = 0 ; i < size ; i++){
        printf("%d ," , arr[i]);
    }
    printf("\n");

    int num ;
    printf("Enter Number to add :");
    scanf("%d" , &num);

    int i , j ;
    for(i = 0 ; i < size ; i++){
        if(arr[i] == num){
            break;
        }
    }
    for(j = i ; j < size - 1 ; j++){
        arr[j] = arr[j + 1];
    }

    for(int k = 0 ; k < size - 1 ; k++){
        printf("%d ," , arr[k]);
    }
}