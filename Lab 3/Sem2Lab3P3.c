// Implementing Circular linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;  
};
struct node *last;


struct node *CreateNode() {
    struct node *new = (struct node*) malloc(sizeof(struct node));
    return new;
}

void Insert(int item) {
    struct node *NewNode = CreateNode(); /*Allocating memory to new node*/
    if(last==NULL) { /*When list is empty*/
        NewNode->data = item; /*Assign data value to this new node*/
        NewNode->next = NewNode; /*Since we have only one node, it would point agian to itself*/
        last = NewNode; /*Last now points to NewNode*/
    } else{
        NewNode->data = item;
        NewNode->next = last->next; 
        last->next = NewNode;
    }
}


void Display() {
    struct node *temp = last->next;
    printf("\nList: ");
    do {
        printf("%d ",temp->data);
        temp = temp->next;
    } while(temp!=last->next);
    printf("\n");
}

void main() {
    int n, ele;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++) {
        printf("Enter element: ");
        scanf("%d",&ele);
        Insert(ele);
    }
    Display();
}