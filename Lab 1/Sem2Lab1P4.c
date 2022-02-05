// 17th January , 2022
// Practice Activity - 1 , Question 4.
// Mridul Vasudeva
// A C program to find the largest and smallest number in an array.
#include <stdio.h>

// Returns the largest element from the array.
int FindLargest(int array[] , int n) {
    int max = array[0];
    for (int i=1; i<n; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Returns the smallest element from the array.
int FindSmallest(int array[] , int n) {
    int min = array[0];
    for(int i=1; i<n; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

void main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int array[n];

    for (int i=0; i<n; i++) {
        printf("Enter elements: ");
        scanf("%d",&array[i]);
    }

    int m = FindLargest(array , n);
    printf("\nLargest Element: %d",m);
    int s = FindSmallest(array , n);
    printf("\nSmallest Element: %d\n",s);
}
