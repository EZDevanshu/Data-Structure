#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void inserInCircular(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        newNode->next = head;
    }
    else
    {
        tail->next = newNode;
        newNode->next = head;
        tail = newNode;
    }
}

void insertAtFirst(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = head;
    tail->next = newNode;
    head = newNode;
}

void deleteAtSpecificPos(int data)
{
    struct Node *temp = head;
    struct Node *prev = head;

    if(head->data == data)
    {
        head = head->next;
        tail->next = head;
        free(temp);
        return;
    }
    do
    {       
        if (temp->data == data)
        {
            prev->next = temp->next;
            if(temp == tail)
            {
                tail = prev;
            }
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->next;
    } while(temp != head);  
}

void insertAtLast(int data)
{
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    tail->next = newNode;
    newNode->next = head;
    tail = newNode;
}
void printList()
{
    struct Node *temp = head;

    while (temp->next != head)
    {
        printf("%d--->", temp->data);
        temp = temp->next;
    }
    printf("%d--->", temp->data);
    printf("NULL\n");
}

void main()
{
    inserInCircular(30);
    inserInCircular(40);
    inserInCircular(50);
    inserInCircular(61);
    inserInCircular(32);
    printList();

    insertAtFirst(65);
    printList();

    deleteAtSpecificPos(32);
    printList();

    insertAtLast(85);
    printList();
}