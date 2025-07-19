#include <stdio.h>

int power(int base , int expo){
    int sum = 1 ;
    
    for(int i = 0 ; i < expo ; i++){
        sum = sum*base;
    }
    return sum;
}

void main() {
    int base ;
    int expo ;
    printf("Enter base : ");
    scanf("%d" ,&base);
    
    printf("Enter expo: ");
    scanf("%d" ,&expo);
    
    printf("%d",power(base , expo));
}