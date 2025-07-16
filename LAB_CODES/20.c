#include<stdio.h>

void main(){
int size ;

    printf("Enter size of array : ");
    scanf("%d" , &size);
 
    int arr[size] ;
    
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
    int a = -1;
    for(int j = 0 ; j < size ; j++){
        for(int k = j+1 ; k < size ; k++){
            if(arr[j] == arr[k]){
                printf("have duplicate");
                a = 1;
                break;
            }
        }
    }
    if(a!=1){
        printf("not have duplicate");
    }
}