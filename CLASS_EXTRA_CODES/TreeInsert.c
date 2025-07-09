#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * leftPtr;
    struct Node * rightPtr;
};

struct Node * root;

struct Node* createNode(int data){
    struct Node* newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->leftPtr = NULL;
    newNode->rightPtr = NULL;

    return newNode;
}

void populate(struct Node * node){
    char response;
    printf("Do you wat to enter element left side of %d (y/n):",node->data);
    scanf(" %c" ,&response);
    if(response == 'y' || response == 'Y'){
        int value ;
        printf("Enter the value of left Node of %d ", node->data);
        scanf("%d" , &value);
        node->leftPtr = createNode(value);
        populate(node->leftPtr);
    }

    printf("Do you wat to enter element right side of %d (y/n):",node->data);
    scanf(" %c" ,&response);
    if(response == 'y' || response == 'Y'){
        int value ;
        printf("Enter the value of left Node of %d ", node->data);
        scanf("%d" , &value);
        node->rightPtr = createNode(value);
        populate(node->rightPtr);
    }
}

void displayTree(struct Node* node, int level) {
    if (node == NULL) return;

    displayTree(node->rightPtr , level + 1);
    for(int i = 0 ; i < level ; i++){
        printf("\t");
    }
    printf("%d\n" , node->data);

}
int main(){
    struct Node * root = NULL;
    int val;
    printf("Enter Root Node Value :");
    scanf("%d" ,&val);
    root = createNode(val);
    populate(root);

    printf("Pretty display tree\n");
    displayTree(root,0);

    return 0;
}