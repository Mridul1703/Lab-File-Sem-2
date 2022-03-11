// Implementing Queue using linked list...
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next; 
}node;
node *front = NULL;
node *rear = NULL;

struct node *CreateNode() {
    node *new = (node*) malloc(sizeof(node));
    return new;
}

void Enqueue(int item) {
    node *NewNode = CreateNode();
    NewNode->data = item;
    NewNode->next = NULL;
    if(front == NULL && rear == NULL) {
        front = rear = NewNode;
        return;
    }
    rear->next = NewNode;
    rear = NewNode;
}

void Dequeue() {
    node *temp = front;
    if(front == NULL) {
        return;
    } else {
        printf("\n**%d Dequeued**\n",front->data);
        front = front->next;
    }
    free(temp);
}

void Display() {
    node *temp = front;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void main() {
    int ch, val;
    while(1) {
        printf("\n\t\t**MENU**\n\t1. Enqueue\n\t2. Dequeue\n\t3. Display\n\t4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                printf("Enter value to be inserted: ");
                scanf("%d",&val);
                Enqueue(val);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
                break;
        }
    }    
}