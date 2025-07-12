// Write a program to implement a node structure for singly linked list. Read the
// data in a node, print the node.

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * head = NULL;

void readNode(int newData){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;

    head = newNode;
}

void PrintList(){
    struct Node * temp = head;
    while(temp != NULL){
        printf("%d---->" , temp->data);
        temp = temp->next;
    }
    printf("NULL");
}


void main(){
    readNode(30);
    readNode(50);

    PrintList();
}