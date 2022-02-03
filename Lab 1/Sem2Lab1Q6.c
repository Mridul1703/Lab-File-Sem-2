// 17th January , 2022
// Lab Activity - 1 , Question 5.
// Mridul Vasudeva
// A C program used to check if a given element is present inside array or not.
#include <stdio.h>

int SearchElement(int array[] , int n , int key) {
    for (int i=0; i<n; i++) {
        if(array[i] == key) {
            // Returns 1 if element is found.
            return 1;
        }
    }
    // Returns 0 if element not found.
    return 0;
}

void main() {
    int n , key;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    // Array created which can store both integers and real numbers.
    int array[n];
    
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }

    printf("\nEnter element to search for: ");
    scanf("%d",&key);

    int x = SearchElement(array , n , key);
    if(x == 1) {
        printf("\nElement successfully found!\n");
    } else {
        printf("\nElement not found!\n");
    }
}