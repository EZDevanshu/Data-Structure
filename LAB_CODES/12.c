#include <stdio.h>

void main() {
    int number; 
    printf("Enter Number : ");
    scanf("%d" ,&number);
    int count = 0 ;  
    for(int i = 1 ; i <= number ; i++){
        if(number % i == 0 || number % i == 1){
         count++;
        }
    }
    if(count == 2){
        printf("%d is prime number" , number);
    }
    else{
        printf("%d is not Prime number" , number);
    }
}
