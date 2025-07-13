#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int rollNO;
    char name[50];
    char branch[20];
    int branchNo;
};

void main(){
    struct Node * a1 = (struct Node *)malloc(sizeof(struct Node));

    a1->rollNO = 101;
    strcpy(a1->name , "Devanshu");
    strcpy(a1->branch , "CSE");
    a1->branchNo = 240001;
    printf("%d\n" , a1->rollNO);
    printf("%s\n" , a1->name);
    printf("%s\n" , a1->branch);
    printf("%d\n" , a1->branchNo);

    free(a1);
}