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

    void seprate()
    {
        struct Node *save = head;
        while (save != NULL)
        {
            struct Node * first1 ;
            struct Node * first2 ;
            if(save->data % 2 == 0){
                struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->data = save->data;
                newNode->next = first1;
            }
            save = save->next;
        }
    }