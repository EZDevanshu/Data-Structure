#include <stdio.h>
#include <stdlib.h>

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

int countNodes()
{
    struct Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void swapNode(int target)
{
    int count = countNodes();

    if (target > count || target <= 0 || target == count - target + 1)
    {
        return;
    }

    struct Node *first_prev = NULL;
    struct Node *first = head;
    struct Node *second_prev = NULL;
    struct Node *second = head;

    for (int i = 1; i < target; i++)
    {
        first_prev = first;
        first = first->next;
    }

    for (int i = 1; i < count - target + 1; i++)
    {
        second_prev = second;
        second = second->next;
    }
    if (first_prev != NULL)
    {
        first_prev->next = second;
    }
    else
    {
        head = second;
    }
    if (second_prev != NULL)
    {
        second_prev->next = first;
    }
    else
    {
        head = first;
    }

    struct Node *temp = first->next;
    first->next = second->next;
    second->next = temp;
}

void PrintList()
{
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
    int target = 6;

    insert(22);
    insert(21);
    insert(17);
    insert(16);
    insert(18);
    insert(10);
    PrintList();

    swapNode(target);
    PrintList();
}
