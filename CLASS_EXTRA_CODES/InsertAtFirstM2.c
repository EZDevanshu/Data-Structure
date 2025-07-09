#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *addFirst(struct Node *first, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = first;
    return newNode;
}

void printList(struct Node *first)
{
    struct Node *temp = first;

    while (temp != NULL)
    {
        printf("%d --->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void main()
{

    struct Node *first = NULL;

    first = addFirst(first, 10);
    first = addFirst(first, 30);

    printList(first);
}