// 17th January , 2022
// Lab Activity - 1 , Question 1.
// Mridul Vasudeva
// A C program used to find the sum of array using recursion.
#include <stdio.h>

void ArrayInput (int array[] , int m) {
    for (int i=0; i<m; i++) {
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }
}

// Function using recursion to find sum of elements of array.
int SumofArray (int array[] , int x , int m) {
    int sum = 0;
    // Base condition used to terminate the iterations recursion will be performing.
    if (x == m) 
        return sum;
    else 
        // Here sum of elements of array is calculated.
        return sum = array[x] + SumofArray(array , x+1 , m);
}

void main () {
    int m;
    printf("Enter size of array: ");
    scanf("%d",&m);

    int array[m];

    // Main is calling a function used to take input of array elements.
    ArrayInput(array , m);
    // Here s is storing sum of array...
    int s = SumofArray(array , 0 , m);
    // And printing it as an output here.
    printf("\nSum of array is %d\n",s);
}