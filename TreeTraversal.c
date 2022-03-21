#include <stdio.h>
#include <stdlib.h>

typedef struct BinaryTree {
    char data;
    struct BinaryTree *left, *right;
}bt;
bt *RootPtr;

struct BinaryTree *CreateNode(char item) {
    bt *new = (bt*) malloc(sizeof(bt));
    new->data = item;
    new->left = NULL;
    new->right = NULL;
    return new;
};

void PreOrder(bt *root) {
        if(root) {
            printf("%c ",root->data);
            PreOrder(root->left);
            PreOrder(root->right);
    }
}

void InOrder(bt *root) {
    if(root) {
        InOrder(root->left);
        printf("%c ",root->data);
        InOrder(root->right);
    }
}

void main() {
    int ch;

    RootPtr = CreateNode('A');
    RootPtr->left = CreateNode('B');
    RootPtr->right = CreateNode('E');
    RootPtr->left->left = CreateNode('C');
    RootPtr->left->right = CreateNode('D');
    RootPtr->left->right->left = CreateNode('G');
    RootPtr->left->right->right = CreateNode('H');
    RootPtr->right->right = CreateNode('F');
    RootPtr->right->right->left = CreateNode('I');

    while(1) {
        printf("\n\t\t**MENU**\n\t1. Pre Order\n\t2. In Order\n\t3. Post Order\n\t4. Level Order\n\t5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                PreOrder(RootPtr);
                break;
            case 2:
                InOrder(RootPtr);
                break;
        }
    }
}

