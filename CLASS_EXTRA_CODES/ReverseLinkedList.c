#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *temp = NULL;

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

void reverse()
{
    if (head == NULL)
    {
        return;
    }
    else
    {
        while(head != NULL)
        {
            struct Node* temp2;
            temp2 = head->next;
            head->next = temp;
            temp = head;
            head = temp2;
        }
        head = temp;
    }
}

void print()
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

    insert(30);
    insert(39);
    insert(59);
    insert(55);
    insert(40);

    dis1();
    reverse();

    print();
}