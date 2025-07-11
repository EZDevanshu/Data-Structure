#include <stdlib.h>
#include <stdio.h>

struct queueNode {
    int data;
    struct queueNode * next;
};

struct queueNode * head = NULL;
struct queueNode * tail = NULL;

void enqueue(int data){
    struct queueNode * newNode = (struct queueNode *)malloc(sizeof(struct queueNode));

    
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

int dequeue(){
    struct queueNode * temp = head;
    int value = temp->data;
    head = head->next;
    free(temp);
    return value;
}
int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);


   int remove = dequeue();

    printf(" removed element is %d" , remove);

    return 0;
}

