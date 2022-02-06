// 17th January , 2022
// Practice Activity - 1 , Question 5.
// Mridul Vasudeva
#include <stdio.h>

void ArrayToArray(int* array1 , int* array2 , int n) {
    for (int i=0; i<n; i++) {
        *(array2+i) = *(array1+i);
    }
    printf("\nElements of Array 1:\n");
    for (int i=0; i<n; i++) {
        printf("%d ",*(array1+i));
    }
    printf("\nElements of Array 2:\n");
    for (int i=0; i<n; i++) {
        printf("%d ",*(array2+i));
    }
}

void main() {
    int n;
    printf("Enter length of array: ");
    scanf("%d",&n);

    int array1[n];
    int array2[n];

    for (int i=0; i<n; i++) {
        printf("Enter element: ");
        scanf("%d",&array1[i]);
    }

    ArrayToArray(array1 , array2 , n);
    // MergeArray(array1 , array2 , n);
}