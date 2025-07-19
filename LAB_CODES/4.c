#include<stdio.h>

void main(){
    int a = 10 ;
    int b = 27 ;
    int c = 150 ;

    int ans =  (a > b && b > c) ? (a) :
                (a < b && b > c) ? b : c;

              printf( "%d" ,ans);
}