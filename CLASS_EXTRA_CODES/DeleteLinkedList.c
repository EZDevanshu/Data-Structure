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

void printList()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deletNode(int dataDelete)
{
    struct Node *save;
    save = head;
    struct Node *pred;
    pred = NULL;

    while (save != NULL)
    {
        if (save->data == dataDelete)
        {
            if (save == head)
            {
                head = head->next;
                free(save);
                save = head;
            }
            else
            {
                struct Node *temp = save;
                pred->next = save->next;
                save = save->next;
                free(temp);
            }
        }
        else
        {
            pred = save;
            save = save->next;
        }
    }
}

void main()
{
    insert(30);
    insert(50);
    insert(62);
    insert(555);

    deletNode(555);

    printList();
}