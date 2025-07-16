#include<stdio.h>

void main(){
int size ;

    printf("Enter size of array : ");
    scanf("%d" , &size);
 
    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
    int num1 ;
    int num2 ;
    printf("Enter the number have in arrray :");
    scanf("%d" ,&num1);

    printf("Entwr number you want to replace :");
    scanf("%d" , &num2);

    int indexOfnum1 = 0 ;
    int indexOfnum2 = 0 ;

    for(int i = 0 ; i < size ; i++){
         if(arr[i] == num1){
            indexOfnum1 = i;
         }
         if(arr[i] == num2){
            indexOfnum2 = i;
         }
    }
        arr[indexOfnum1] = num2;
        arr[indexOfnum2] = num1;

    for(int i = 0 ; i < size ; i++){
        printf("%d \n", arr[i]);
    }
}