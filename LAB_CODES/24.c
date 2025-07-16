#include<stdio.h>

void main(){
    int size ;
    printf("Enter size of array : ");
    scanf("%d" , &size);

    int arr[size];
    printf("Enter elemets :");
    for(int i = 0 ; i < size ; i++){
        scanf("%d" ,&arr[i]);
    }

    for(int i = 0 ; i < size ; i++){
        printf("%d" , arr[i]);
    }
    printf("\n");
    int num ;
    printf("Enter Number to add :");
    scanf("%d" , &num);
    int atIndex ;
    printf("Enter Index to insert num : ");
    scanf("%d" , &atIndex);

    int newArray[size + 1];

    for(int i = 0 , j = 0; i < size + 1 ; i++){
        if(i == atIndex){
            newArray[i] = num;
        }
        else{
            newArray[i] = arr[j];
            j++;
        }
    }
     for(int i = 0 ; i < size + 1 ; i++){
        printf("%d" , newArray[i]);
    }
    
}