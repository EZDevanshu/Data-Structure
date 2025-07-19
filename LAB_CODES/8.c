#include <stdio.h>

int fact(int number){
        if(number == 1){
            return 1;
        }
        return number*fact(number - 1);
    }

void main() {
    int number ;
    printf("Enter Number : ");
    scanf("%d" ,&number);
    
    printf("%d",fact(number));
}