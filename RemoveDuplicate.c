#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node * head = NULL;

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

void removeDuplicate()
{
    struct Node * current = head;

    while(current != NULL)
    {
        struct Node * save = current->next;
        struct Node * pred = current;;

        while(save != NULL){
            if(current->data == save->data){
                struct Node * temp = save;
                pred->next = save->next;
                save = save->next;
                free(temp);
            }
            else
            {
                pred = save;
                save = save->next;
            }
        }
        current = current->next;
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
    insert(55);
    insert(43);
    dis1();

    removeDuplicate();

    printList();
}