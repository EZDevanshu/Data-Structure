// Write a program to delete a number from a given location in an array.

#include<stdio.h>

void main(){
    int size ;

    printf("Enter size Of arr :");
    scanf("%d" , &size);

    int arr[size];

    printf("Enter Elemens :");

    for(int i = 0 ; i < size ; i++){
        scanf("%d" , &arr[i]);
    }

    for(int i = 0 ; i < size ; i++){
        printf("%d" , arr[i]);
    }

    int index;
    
    printf("Enter index to delete Element :");
    scanf("%d" , &index);

    int newArray[size - 1];

    for(int i = 0 , j = 0 ; i < size ; i++){
         if(i != index){
            newArray[j] = arr[i];
            j++;
         }
    }
    for(int i = 0 ; i < size - 1 ; i++){
        printf("%d" , newArray[i]);
    }
}