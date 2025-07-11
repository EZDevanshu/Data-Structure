#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first1 = NULL;
struct Node *first2 = NULL;


void insert(int newData){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = first1;
    first1 = newNode;
}
void dis1(){
    struct Node* temp = first1;
    printf("Print before :");
    while(temp != NULL){
        printf("%d---->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
 }


void copy(){
    if(first1 == NULL){
        return;
    }
    else{
        struct Node * save ;
        save = first1;
        struct Node * temp = NULL;

        while(save != NULL){
            struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

            newNode->data = save->data;
            newNode->next = NULL;

            if(first2 == NULL){
                first2 = newNode;
                temp = newNode;
            }
            else{
                temp->next = newNode;
                temp = newNode;
            }
            save = save->next;
        }
    }
}

void print(){
    struct Node * save ;
    save = first1;
    printf("Print after :");
    while(save != NULL){
        printf("%d --->" ,save->data);
        save = save->next;
    }
    printf("NULL\n");
}
void main(){

    insert(30);
    insert(59);
    insert(40);

    dis1();
    copy();

    print();
}