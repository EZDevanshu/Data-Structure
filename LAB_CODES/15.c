#include <stdio.h>

void main(){
    int num = 0;

    printf("Enter the numbre : ");
    scanf("%d",&num);
    int temp = num;

    int count = 0 , sum1 = 0;
    
    while(num != 0){
        num /= 10;
        count++;
    }
    num = temp ;
    while(num != 0){
        int digits = num % 10 ;
        num /= 10 ;
        int sum = 1 ;

        for(int i = 1 ; i <= count ; i++){
            sum = sum * digits ;
        }
        sum1 = sum + sum1 ;
    }
    if (temp == sum1){
        printf("%d is amsrong number", temp);
    }
    else{
        printf("%d is not amsrong number" , temp);
    }
}