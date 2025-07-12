/*
Write a menu driven program to implement following operations on the singly
linked list.
• Insert a node at the front of the linked list.
• Display all nodes.
• Delete a first node of the linked list.
• Insert a node at the end of the linked list.
• Delete a last node of the linked list.
• Delete a node from specified position.
• count the number of nodes
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void readNode(int newData)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = head;

    head = newNode;
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

void deleteFirstNode()
{
    struct Node *temp = head;

    head = head->next;
    free(temp);
}
void deleteAtSpecificPos(int dataDelete)
{
    struct Node *save;
    save = head;
    struct Node *pred;
    pred = NULL;

    while (save != NULL)
    {
        if (save->data == dataDelete)
        {
            if (save == head)
            {
                head = head->next;
                free(save);
                save = head;
            }
            else
            {
                struct Node *temp = save;
                pred->next = save->next;
                save = save->next;
                free(temp);
            }
        }
        else
        {
            pred = save;
            save = save->next;
        }
    }
}

void insertAtLast(int newData){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        struct Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;  
        } 
        temp->next = newNode;
    }
}

void countNodes(){
    int count = 0;
    struct Node * temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    printf("Total Number of Nodes is %d" , count);
}
void insertAtFirst(int newData){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

int main()
{
    int n , data ,insertLastEle , deleteNode; 
    printf("Enter Number of nodes : ");
    scanf("%d" , &n);

    printf("for 1 : insert Node at first Position \n for2 : display all nodes \n for 3 : delete Node at first position \n for 4 : insert Node at last position \n for 5 : delete a node form presific position \n for 6 : count the number of nodes \n" );

    int operNum;
    printf("Which operation you want perform :");
    scanf("%d" , &operNum);

    printf("Enter the value of nodes");
    for(int i = 0 ; i < n ; i++){
        int val;
        printf("Enter the val for Node %d " , i + 1);
        scanf("%d" , &val);
        readNode(val);  
    }

    switch (operNum)
    {
    case 1:
        printf("Enter value you want to insert at first :");
        scanf("%d" , &data);
        insertAtFirst(data);
        PrintList();
        break;
    case 2:
        PrintList();
        break;
    case 3:
        deleteFirstNode();
        PrintList();
        break;
    case 4:
        printf("Enter the element you wnat to insert at last :");
        scanf("%d" , &insertLastEle);
        insertAtLast(insertLastEle);
        PrintList();

        break;
    case 5:
        printf("Enter you want to delete node at specific pos :");
        scanf("%d" ,&deleteNode);
        deleteAtSpecificPos(deleteNode);
        PrintList();

        break;
    case 6:
        countNodes();
        PrintList();

        break;
    default:
        break;
    }

    return 0;
}