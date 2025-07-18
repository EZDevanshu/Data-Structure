 #include <stdio.h>
    
    void main() {
        int start; 
        int end ;
        printf("Enter start : ");
        scanf("%d" ,&start);
        
        printf("enter end number: ");
        scanf("%d" , &end);
        for(int i = start ; i <= end ; i++){
             int count = 0 ; 
             
             for(int j = 1 ; j  <= i ; j++){
                if(i % j == 0){
                    count++;
                }
             }
             if(count == 2){
                printf("%d " , i);
             }
        }
    }