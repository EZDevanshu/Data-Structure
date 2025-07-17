#include<stdio.h>

void main(){
    int size ;

    printf("Enter size of array : ");
    scanf("%d" , &size);

    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &arr[i]);
    }

    for(int j = 0 ; j < size ; j++){
        printf("%d" ,arr[j]);
    }
}