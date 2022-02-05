// 17th January , 2022
// Practice Activity - 1 , Question 3.
// Mridul Vasudeva
// Binary searching.
#include <stdio.h>

int BinarySearch (int array[] , int n , int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end)/2;
        if(array[mid] > key) {
            end = mid - 1;
        } else if(array[mid] < key) {
            start = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

void main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int array[n];
    
    for (int i=0; i<n; i++) {
        printf("Enter element: ");
        scanf("%d",&array[i]);
    }

    int key;
    printf("\nEnter element to be found: ");
    scanf("%d",&key);

    int x = BinarySearch(array , n , key);
    
    if(x == -1) {
        printf("\nElement not found\n");
    } else {
        printf("\nElement found succesfully!\n");
    }
}
