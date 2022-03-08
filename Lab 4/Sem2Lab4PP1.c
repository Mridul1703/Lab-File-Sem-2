#include <stdio.h>
#include <stdlib.h>
#define Max 100
int array[Max];

// Stack 1: array[Max/2] = array[100/2] = array[50] Memory for stack 1 till index 50...
// Stack 2: array[(Max/2)+1] = array[(100/2)+1] = array[51] Memory for stack 2 from 51-100...

static int top1 = -1;
static int top2 = 50;

void push1(int item1) {
    if(top1 == Max/2) {
        return;
    } else {
        top1++;
        array[top1] = item1;
    }
}

int pop1() {
    return array[top1];
    top1--; 
}

void push2(int item2) {
    if(top2 == Max) {
        return;
    } else {
        top2++;
        array[top2] = item2;
    }
}

int pop2() {
    return array[top2];
    top2--;
}

void main() {
    int ch, i1, i2, p1, p2;

    while(1) {
        printf("\n\t\t**MENU**\n\t1. Insert in Stack 1\n\t2. Insert in Stack 2\n\t3. Delete from Stack 1\n\t4. Delete from Stack 2\n\t5. Exit\n");

        printf("\n\tEnter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                printf("\nEnter element to be inserted: ");
                scanf("%d",&i1);
                push1(i1);
                break;
            case 2:
                printf("\nEnter element to be inserted: ");
                scanf("%d",&i2);
                push2(i2);
                break;
            case 3:
                p1 = pop1();
                printf("\n**%d Deleted from Stack 1**\n",p1);
                break;
            case 4:
                p2 = pop2();
                printf("\n**%d Deleted from Stack 2**\n",p2);
                break;
            case 5:
                exit(0);
                break;
        }
    }
}