#include <stdlib.h>
#include <stdio.h>

struct stackNode {
    int data;
    struct stackNode * next;
};

struct stackNode * head = NULL;

struct stackNode * push(int data){
    struct stackNode * newNode = (struct stackNode *)malloc(sizeof(struct stackNode));

    newNode->data = data;
    newNode->next = head;
    head = newNode;

    return head;
}

int pop(){
    struct stackNode * temp = head;

    int value = temp->data;
    head = head->next;
    free(temp);
    return value;
}
void main(){

    head = push(10);
    head = push(20);
    head = push(30);
    head = push(50);

   int remove = pop();

    printf(" removed element is %d" , remove);

}

