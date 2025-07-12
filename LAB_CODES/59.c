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

void removeDuplicateInSorted(){
    struct Node * current = head;
    
    while(current!=NULL && current->next != NULL){
        if(current->data == current->next->data){
            struct Node * temp = current->next;
            current->next = temp->next;
            free(temp);
        }
        else{
            current = current->next;
        }
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
   insert(27);
   insert(27); 
   insert(13); 
   insert(13); 
   insert(13); 
   insert(6); 
   insert(1);
   insert(1); 

   removeDuplicateInSorted();
   PrintList();

}