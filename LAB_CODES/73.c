#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
    struct Node * prev;
};

struct Node *head = NULL;

void insertInDoublyLinkedList(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void deleteAlter()
{
    struct Node * current = head;

    while (current!=NULL && current->next != NULL){
        
        struct Node * nextNode = current->next;
        if(nextNode->next == NULL){
            current->next = NULL;
        }
        current->next = nextNode->next;
        free(nextNode);
        current = current->next;
    }
}
void printList()
{
    struct Node *temp = head;
    printf("NULL<---");
    while (temp->next != NULL)
    {
        printf("%d---><---", temp->data);
        temp = temp->next;
    }
    printf("%d--->", temp->data);
    printf("NULL\n");
}

void main(){
    insertInDoublyLinkedList(30);
    insertInDoublyLinkedList(50);
    insertInDoublyLinkedList(60);
    insertInDoublyLinkedList(70);
    insertInDoublyLinkedList(86);
    insertInDoublyLinkedList(80);
    printList();

    deleteAlter();
    printList();
}