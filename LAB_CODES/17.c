#include<stdio.h>

void main(){
    int size ;

    printf("Enter size of array : ");
    scanf("%d" , &size);

    printf("enter starting index: ");
    int sIndex ;
    scanf("%d" , &sIndex);

    
    printf("end starting index: ");
    int eIndex ;
    scanf("%d" , &eIndex);

    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0 ;
    for(int j = sIndex ; j <= eIndex ; j++){
        sum += arr[j];
    }

    printf("%d is sum  of you want sum  : " , sum);
}