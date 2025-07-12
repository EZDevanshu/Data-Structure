#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head1 = NULL;
struct Node *head2 = NULL;



void list1(int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head1;

    head1 = newNode;
}

void list2(int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head2;

    head2 = newNode;
}

void checkSame(){
    struct Node * temp1 = head1;
    struct Node * temp2 = head2;
    int flag = 0;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data == temp2->data){
            temp1 = temp1->next;
            temp2 = temp2->next;
            flag = 1;
        }
        else{
            flag = 0;
            break;
        }
    }
    printAns(flag);
}

void printAns(int flag){
    if(flag == 1){
        printf("Both list is same");
    }
    else{
        printf("Both list is not same");
    }
}

void main(){
    list1(10);
    list1(20);
    list1(60);
    list1(70);

    list2(10);
    list2(20);
    list2(80);
    list2(70);

    checkSame();
}