#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data ;
    struct Node* next;
};

struct Node *head = NULL;

void insertAtLastInSinglly(int newData){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        struct Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;  
        } 
        temp->next = newNode;
    }
}

void PrintList(){
    struct Node * temp = head;
    while(temp != NULL){
        printf("%d---->" , temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main(){
    insertAtLastInSinglly(30);
    insertAtLastInSinglly(50);
    insertAtLastInSinglly(62);

    PrintList();
}