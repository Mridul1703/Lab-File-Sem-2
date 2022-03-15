// Implementing Ascending Order Priority Queue...
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    int priority;
    struct Node *next;
}node;
node *head = NULL;

struct Node *CreateNode() {
    node *new = (node*) malloc(sizeof(node));
    return new; 
}

// Enqueue's new element based on priority 
void Enqueue(int item, int p) {
    node *temp = head;
    node *NewNode = CreateNode();
    NewNode->data = item;
    NewNode->priority = p;
    if(temp == NULL || temp->priority > p) {
        NewNode->next = head;
        head = NewNode;
    } else {
        while(temp->next != NULL && temp->next->priority < p) {
            temp =temp->next;
        }
        NewNode->next = temp->next;
        temp->next = NewNode;
    } 
}

int Dequeue() {
    node *temp = head;
    head = head->next;
    return temp->data;
    free(temp);
}

void Display() {
    node *temp = head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void main() {
    int ch, val, prior, dq;
    while(1) {
        printf("\n\t\t**MENU**\n\t1. Enqueue\n\t2. Dequeue\n\t3. Display\n\t4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1: 
                printf("\nEnter value to be inserted: ");
                scanf("%d",&val);
                printf("Enter priority: ");
                scanf("%d",&prior);
                Enqueue(val, prior);
                break;
            case 2:
                dq = Dequeue();
                printf("\n**%d Dequeued**\n",dq);
                break;
            case 3: 
                Display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\n**Enter a valid choice**\n");
        }
    }   
}