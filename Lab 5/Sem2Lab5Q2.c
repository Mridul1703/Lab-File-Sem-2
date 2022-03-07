// Almost done but needs a few changes...
#include <stdio.h>
#define max 50

static int top = -1;
static int front = 0;
static int rear = -1;
char StackArray[max];
char QueueArray[max];

void push(char e) {
    StackArray[top++] = e;
}

char pop() {
    return StackArray[top--];
}

void Enqueue(char e) {
    QueueArray[rear++] = e;
}

char Dequeue() {
    return QueueArray[front];
    front++;
}

void IsPallindrome(char *str) {
    for(int i=0; i<'\0'; i++) {
        push(*(str+i));
        Enqueue(*(str+i));
    }
    
    for(int i=0; i<'\0'; i++) {
        char Sp = pop();
        char Qd = Dequeue();
        
        if(Sp == Qd) {
            printf("It is pallindrome");
        } else {
            printf("It is not pallindrome");       
        }
    }
}

void main() {
    char str[max];
    printf("Enter a string: ");
    gets(str);
    
    IsPallindrome(str);
}
