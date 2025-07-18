#include <stdio.h>

void main(){

    int number = 0 ;

    printf("Etr the number :");
    scanf("%d" , &number);

    int sum = 0;

    for(int i = 1 ; i <= number ; i++){
        for(int j = 1 ;  j <= i ; j++){
            sum = sum + j ;
        }
    }
    printf("%d",sum);
}