// 21st February, 2022.
// Lab Acitivity - 4, Question - 1.
// Mridul Vasudeva
// A C program which implements the concept of Stack(Last in First out) data structure. 
#include <stdio.h>
#include <stdlib.h>

// top element and array are globally defined so they can be used anywhere in the program.
static int top = -1;
int array[25];

void push(int item) {
    top++;
    *(array+top) = item;
}

void pop() {
    if(top == -1) {
        printf("\n\t**Stack Underflow**\n");
        return;
    } 
    top--;
    printf("\n\t**%d deleted successfully**\n",array[top+1]);
}

void Top() {
    if (top == -1) {
        printf("\n\t**Stack Underflow**\n");
        return;
    }
    printf("\n\t**Top Element: %d**\n",array[top]);
}

void print() {
    printf("\nStack: ");
    if (top == -1) {
        printf("Empty");
        return;
    }
    for (int i=0; i<=top; i++) {
        printf("%d ",array[i]);
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