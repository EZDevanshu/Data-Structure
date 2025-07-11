#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * insert(struct Node * first , int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = first;
    first = newNode;

    return first;
}
void dis1(struct Node * first)
{
    struct Node *temp = first;
    printf("Print before :");
    while (temp != NULL)
    {
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void shortList(struct Node * first){
     struct Node * current = first ;
     struct Node * ptr ;
     while(current != NULL){
        ptr = current;
        while(ptr->next != NULL){
            if(current->data > ptr->next->data){
               int temp = current->data;
                current->data = ptr->next->data;
                ptr->next->data = temp;
            }
            ptr = ptr->next;
        }
        current = current->next;
     }
}
void printList(struct Node * fist){
    struct Node *save;
    save = fist;
    printf("Print after :");
    while (save!= NULL)
    {
        printf("%d --->", save->data);
        save = save->next;
    }
    printf("NULL\n");
}
void main(){
    struct Node * first = NULL;
   first = insert(first, 19);
   first =  insert(first,17);
   first =  insert(first,9);
   first =  insert(first,3);
   first =  insert(first,8);
   first =  insert(first,21);


   

    dis1(first);

    shortList(first);
    printList(first);
}