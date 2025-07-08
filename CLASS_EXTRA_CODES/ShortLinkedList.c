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
void dis1()
{
    struct Node *temp = head;
    printf("Print before :");
    while (temp != NULL)
    {
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void sortList()
{
    struct Node *save, *ptr;
    for (save = head; save != NULL; save = save->next)
    {
        for (ptr = save->next; ptr != NULL; ptr = ptr->next)
        {
            if (save->data > ptr->data)
            {
                int temp = save->data;
                save->data = ptr->data;
                ptr->data = temp;
            }
        }
    }
}

void printList()
{
    struct Node *save;
    save = head;
    printf("Print after :");
    while (save != NULL)
    {
        printf("%d --->", save->data);
        save = save->next;
    }
    printf("NULL\n");
}

void main()
{
    insert(55);
    insert(43);
    insert(20);
    insert(83);

    sortList();

    printList();
}