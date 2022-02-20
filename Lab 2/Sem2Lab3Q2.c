// 31st January, 2022.
// Lab Activity - 3, Question - 2.
// Mridul Vasudeva
// A C program to implement stack using linked list.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node* top = NULL;

struct node* CreateNode() {
    struct node* new = (struct node*) malloc(sizeof(struct node));
    return new;
}

void push(int value) {
    struct node* NewNode = CreateNode();
    NewNode->data = value;
    NewNode->next = top;
    top = NewNode;
}

void pop() {
    struct node* temp = top;
    if(temp == NULL) {
        printf("\n\t**Stack Underflow**\n");
        return;
    }
    top = temp->next;
    printf("\n\t**%d deleted successfully**\n",temp->data);
    free(temp);
}

void Top() {
    if(top==NULL) {
        printf("\n\t**Stack Underflow**\n");
        return;
    }
    printf("\n\t**Top Element: %d**\n",top->data);
}

void print() {
    struct node* temp = top;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void main() {
    int choice, item;

    while(1) {
        printf("\n\t\t**MENU**\n\t1. Insert an element\n\t\2. Delete an element\n\t3. Find top element\n\t4. View Stack\n\t5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("\nEnter value to be inserted: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                Top();
                break;
            case 4:
                print();
                break;
            case 5:
                exit(0);
            default:
                printf("\n\t**Enter a valid choice**\n");
        }
    }
}