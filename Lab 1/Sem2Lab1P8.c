// 17th January , 2022
// Practice Activity - 1.
// Mridul Vasudeva
// A C program to count number of words in a string.
#include <stdio.h>

void main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("\nYour string is: %s",str);

    int WordCount = 0;
    for (int i=0; str[i]!='\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ') {
            WordCount++;
        }
    }
    printf("\nNumber of words: %d\n",++WordCount);
}