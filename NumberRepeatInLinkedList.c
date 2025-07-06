    #include <stdio.h>
    #include <stdlib.h>

    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *head = NULL;

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

void countRepeatNumber()
{
    struct Node *current = head;

    while (current != NULL)
    {
        struct Node *save = current->next;
        struct Node *pred = current;
        int count = 1;
        while (save != NULL)
        {
            if (current->data == save->data)
            {
                pred->next = save->next;
                save = save->next;
                count++;
            }
            else
            {
                pred = save;
                save = save->next;
            }
        }
        printf("%d is repeat in linkedList is %d time\n", current->data, count);
        current = current->next;
    }
}

void main()
{
    insert(55);
    insert(43);
    insert(55);
    insert(43);
    dis1();

    countRepeatNumber();

}