#include <stdio.h>
#include <stdlib.h>

int getNext(int num){
    int sum = 0; 

    while(num > 0){
        int x = num % 10;
        sum += x*x;
        num /= 10;
    }
    return sum;
}


int isHappyNumber(int num){ 
    int slow = num;
    int fast = getNext(num);

    while(fast != 1 && fast != slow){
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }
    return fast==1;
}

int main(){
    int num;
    printf("Enter Number :");
    scanf("%d" , &num);

    if(isHappyNumber(num)){
        printf("%d is happy Number ", num);
    }
    else{
        printf("%d is not happy Number ", num);
    }
}