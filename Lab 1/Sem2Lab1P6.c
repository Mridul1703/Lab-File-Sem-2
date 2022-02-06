// 17th January , 2022
// Practice Activity - 1 , Question 4.
// Mridul Vasudeva
// A C program to count number of alphabets , digits and speacial characters.
#include <stdio.h>

void main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);
    printf("\nYour string is: %s",str);
    int Alphcount = 0 , Digcount = 0 , Spccount = 0;
    for (int i=0; str[i]!='\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            Alphcount++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            Digcount++;
        } else {
            Spccount++;
        }
    }

    printf("\n\nNumber of Alphabets: %d",Alphcount);
    printf("\nNumber of Digits: %d",Digcount);
    printf("\nNumber of Speacial characters: %d\n",Spccount);
}