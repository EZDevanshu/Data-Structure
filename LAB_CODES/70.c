#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *head1 = NULL;
struct Node *head2 = NULL;

void inserInCircular(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        newNode->next = head;
    }
    else
    {
        tail->next = newNode;
        newNode->next = head;
        tail = newNode;
    }
}

void printCircular(struct Node *head)
{
    struct Node * temp = head;

    while(temp->next != head)
    {
        printf("%d--->" , temp->data);
        temp = temp->next;
    }
    printf("%d--->" , temp->data);
    printf("NULL\n");
}

void split()
{
    if (head == NULL)
    {
        return;
    }

    struct Node *slow = head;
    struct Node *fast = head;

    while ((fast->next != head) && (fast->next->next != NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    head1 = head;
    head2 = slow->next;

    slow->next = head1;

    if(fast->next->next == head)
    {
        fast = fast->next;
    }
    fast->next = head2;
}
void printList()
{
    struct Node *temp = head;

    while (temp->next != head)
    {
        printf("%d--->", temp->data);
        temp = temp->next;
    }
    printf("%d--->", temp->data);
    printf("NULL\n");
}
void main()
{
    inserInCircular(30);
    inserInCircular(40);
    inserInCircular(50);
    inserInCircular(61);
    inserInCircular(32);
    printList();

    split();

    printf("first half :");
    printCircular(head1);

    printf("second half :");
    printCircular(head2);
}