#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
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

void insertAtFirstInDoubly(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void deleteAtSpesificPos(int data)
{
    struct Node *temp = head;
    struct Node *prev = head;

    if (temp->data == data)
    {
        head = head->next;
        head->prev = NULL;
        free(temp);
        return;
    }
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            prev->next = temp->next;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

void insertAtLastPos(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    newNode->data = data;
    newNode->next = NULL;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            temp->next = newNode;
            newNode->prev = temp;
            return;
        }
        temp = temp->next;
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

void main()
{
    insertInDoublyLinkedList(30);
    insertInDoublyLinkedList(50);
    insertInDoublyLinkedList(60);
    insertInDoublyLinkedList(70);
    insertInDoublyLinkedList(80);
    printList();

    insertAtFirstInDoubly(55);
    printList();

    deleteAtSpesificPos(80);
    printList();

    insertAtLastPos(88);
    printList();
}