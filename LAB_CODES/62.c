#include <stdio.h>
#include <stdlib.h>

struct Node {
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

void removeDuplicate(){
    struct Node * current = head;

    while(current != NULL && current->next != NULL){
        struct Node * prev = current;
        struct Node * save = current->next;
        while(save != NULL){
            if(current->data == save->data){
                struct Node * temp = save;
                save = save->next ;
                prev->next = temp->next;
                free(temp);
            }
            else{
                prev = save;
                save = save->next;
            }
        }
        current = current->next;
    }
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

void main(){
    insert(3);
    insert(1);
    insert(3);
    insert(2);
    insert(1);
    insert(2);

    removeDuplicate();
    PrintList();
}