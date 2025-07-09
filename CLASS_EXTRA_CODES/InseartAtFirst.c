#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data ;
    struct Node* next;
};

struct Node * head = NULL;

void insert(int newData){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void printList(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
 }

void main() {
insert(30);
insert(50);
insert(62);

printList();
}