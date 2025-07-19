#include <stdio.h>

int reverse(int number){
    int rev = 0 ;
    
    while(number!=0){
        int rem = number % 10 ;
        number /= 10;
        rev = rev*10 + rem;
    }
    return rev;
}

void main() {
    int number; 
    printf("Enter Number : ");
    scanf("%d" ,&number);
      
    printf("%d",reverse(number));
}