#include<stdio.h>

void main(){
    int size ;

    printf("Enter size of array : ");
    scanf("%d" , &size);

    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0 ; 

    for(int j = 0 ; j < size ; j++){
        sum += arr[j];        
    }

    printf("Avg is %d : ",(sum / size));
}