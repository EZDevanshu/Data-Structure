#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *lptr;
    struct Node *rptr;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->lptr = NULL;
    newNode->rptr = NULL;
    return newNode;
}

int search(int post[], int data, int l, int h)
{
    for (int i = l; i <= h; i++)
    {
        if (post[i] == data)
        {
            return i;
        }
    }
    return -1;
}

struct Node *createBTS(int pre[], int post[], int *preIdx, int l, int h, int size)
{
    if (*preIdx >= size || l > h)
    {
        return NULL;
    }

    struct Node *root = createNode(pre[*preIdx]);
    (*preIdx)++;

    if (l == h || *preIdx >= size)
    {
        return root;
    }

    int i = search(post, pre[*preIdx], l, h);

    if (i != -1)
    {
        root->lptr = createBTS(pre, post, preIdx, l, i, size);
        root->rptr = createBTS(pre, post, preIdx, i + 1, h - 1, size);

        return root;
    }
}

void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->lptr);
    printf("%d ", root->data);
    inorder(root->rptr);
}

int main()
{
    int pre[] = {1, 2, 4, 5, 3, 6, 7};
    int post[] = {4, 5, 2, 6, 7, 3, 1};
    int size = sizeof(pre) / sizeof(pre[0]);
    int preIdx = 0;

    struct Node *root = createBTS(pre, post, &preIdx, 0, size - 1, size);

    printf("Inorder traversal of constructed tree:\n");
    inorder(root);

    return 0;
}