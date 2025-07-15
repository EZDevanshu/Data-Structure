//  Write a program to insert a number in an array that is already sorted in an 
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
        if(arr[i] > num){
            break;
        }
    }

    for(j = size ; j > i ; j--){
        arr[j] = arr[j - 1];
    }
    arr[i] = num;

    for(int k = 0 ; k <= size ; k++){
        printf("%d ," , arr[k]);
    }
}