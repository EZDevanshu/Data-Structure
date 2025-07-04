#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * firstEven = NULL;
struct Node * firstOdd = NULL;

struct Node * insert(struct Node*first , int data){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = first;

    first = newNode;

    return first; 
}

void printList(struct Node * first){
    struct Node * save = first;
    printf("Orignal List :");
    while(save != NULL){
        printf("%d--->",save->data);
        save = save->next;
    }
    printf("NULL\n");
}

void separate(struct Node* first){
    struct Node * save = first;

    while(save != NULL){
        struct Node * nextNode = save->next;
        save->next = NULL;
        if(save->data % 2 == 0){
            save->next = firstEven;
            firstEven = save;
        }
        else{
            save->next = firstOdd;
            firstOdd = save;
        }
        save = nextNode;
    }
}

void printListEven(){
    struct Node * saveEven = firstEven;
    printf("Even Nodes :");
    while(saveEven != NULL){
        printf("%d--->" , saveEven->data);
        saveEven = saveEven->next;
    }
    printf("NULL\n");
}

void printListOdd(){
    struct Node * saveOdd = firstOdd;
    printf("Odd Nodes :");
    while(saveOdd != NULL){
        printf("%d--->" , saveOdd->data);
        saveOdd = saveOdd->next;
    }
    printf("NULL\n");
}
void main(){
    struct Node * first = NULL;

    first = insert(first , 3);
    first = insert(first , 4);
    first = insert(first , 5);
    first = insert(first , 6);
    first = insert(first , 7);
    printList(first);
    separate(first);
    printListEven();
    printListOdd();

}