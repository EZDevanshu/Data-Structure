#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;

    head = newNode;
}

void PrintList()
{
    printf("print Before :");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void findGCD()
{
    struct Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        int newNode = 0;
        if (temp->next != NULL)
        {
            for (int i = 1; i <= fmin(temp->data, temp->next->data); i++)
            {
                if ((temp->data % i == 0) && (temp->next->data % i == 0))
                {
                    newNode = i;
                }
            }
        }
        insertAtMiddle(temp, newNode);
        temp = temp->next->next;
    }
}

void insertAtMiddle(struct Node *temp, int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = temp->next;
    temp->next = newNode;
}

void PrintListAfter()
{
    printf("print After :");
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void main()
{
    insert(100);
    insert(250);
    insert(50);



    PrintList();
    findGCD();
    PrintListAfter();
}