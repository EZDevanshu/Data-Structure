#include<stdio.h>

void main(){
    int size ;

    printf("Enter size of array : ");
    scanf("%d" , &size);
 
    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
    int samllest = 0;
    int largest = 0;
    for(int i = 0 ;  i < size ; i++){
        if(arr[i] > arr[i+1]){
            samllest = i+1;
        }
        else  if(arr[i] > arr[i+1]){
            largest = i;
        }
    }
    
    printf("%d is smallest number\n",samllest);
    printf("%d is largest nnumber",largest);
}