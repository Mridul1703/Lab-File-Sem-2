// A C program uses dynamic memory allocation to create and array and relocate memory when required.
#include <stdio.h>
#include <stdlib.h>

void main () {
  int n1;
  printf("Enter size of array: ");
  scanf("%d",&n1);

  int *array;

  // Dynamic memory allocated using malloc().
  array = (int *) malloc(n1*sizeof(int));

  for (int i=0; i<n1; i++) {
    printf("Enter %d element: ",i+1);
    scanf("%d",&array[i]);
  }
  
  int n2;
  printf("\nEnter new size of array: ");
  scanf("%d",&n2);
  printf("\n");


  // Memory reallocated dynamically using realloc().
  array = realloc(array , n2*sizeof(int));

  for (int i=n1; i<n2; i++) {
    printf("Enter %d element: ",i+1);
    scanf("%d",&array[i]);
  }
  printf("\n");

  for (int j=0; j<n2; j++) {
    printf("%d ",array[j]);
  }
  
  free(array);
}
