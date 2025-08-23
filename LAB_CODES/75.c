#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * lptr;
    struct Node * rptr;
};

struct Node * root = NULL;

struct Node * createNode (int data){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->lptr = NULL;
    newNode->rptr = NULL;

    return newNode;
}

struct Node * insert(int data){
    if(root == NULL){
        return createNode(data);
    }
    if(data < root->data){
        root->lptr = insert(data);
    }
    else if(data > root->data){
        root->rptr = insert(data);
    }
    return root;
}

void inOrrderTraversal(int data){
    
}

struct Node * delete(struct Node * root,int data){
    if(root == NULL){
        return root;
    }

    if(data < root->data){
        root->lptr = delete(root->lptr  , data);
    }
    else if(data > root->data){
        root->rptr = delete(root->rptr , data);
    }  
    else{
        if(root->lptr == NULL){
            struct Node * temp = root->rptr;
            free(root);
            return temp;
        }
        else if(root->rptr == NULL){
            struct Node * temp = root->lptr;
            free(root);
            return temp;
        }

        struct Node * temp = fidnMin(root->rptr);
        root->data = temp->data;
        root->rptr = delete(root->rptr , temp->data);
    }
    return root;
}
struct Node * findMin(struct Node * root){
    while(root && root->lptr != NULL){
        root = root->lptr;
    }
    return root;
}

void main(){

    insertNode(root,40);
    insertNode(root,55);
    insertNode(root,36);
    insertNode(root,42);
    insertNode(root,56);

}