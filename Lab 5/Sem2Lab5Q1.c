// Implementing Queue using Array.
#include <stdio.h>
#include <stdlib.h>

static int front = 0;
static int rear = -1;

void Dequeue(int *array) {
    printf("\n**%d deleted**\n",*(array+front));
    front++;
}

void Enqueue(int item, int *array) {
    rear++;
    *(array+rear) = item;
    printf("\n**%d inserted**\n",*(array+rear));
}

void ViewQueue(int *array) {
    printf("Queue: ");
    for (int i=front; i<=rear; i++) {
        printf("%d ",*(array+i));
    }
    printf("\n");
}

void main() {
    int array[10], ch, data;

    while (1) {
        printf("\n\t\t**MENU**\n\t1. Insert element in Queue\n\t2. Delete element from Queue\n\t3. View Queue\n\t4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch) {
            case 1:
                printf("Enter element to be inserted: ");
                scanf("%d",&data);
                Enqueue(data,array);
                break;
            case 2:
                Dequeue(array);
                break;
            case 3:
                ViewQueue(array);
                break;
            case 4:
                exit(0);
                break;
        }
    }
}