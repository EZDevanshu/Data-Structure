#include<stdio.h>

void main(){
    int year ;

    printf("Etr year : ");
    scanf("%d" , year);

    if(year % 4 == 0 && year % 400 == 0){
        printf("leap year");
    }
    else{
        printf("Not leap");
    }
}