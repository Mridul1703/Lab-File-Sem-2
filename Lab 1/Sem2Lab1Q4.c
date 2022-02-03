// 17th January, 2022
// Lab Activity - 1, Question - 4
// A C program used to find sum of rows and columns of a given 2D array.
#include <stdio.h>

void main() {
    int m , n;
    printf("Enter size of matrix [m] [n]: ");
    scanf("%d %d",&m,&n);
    // A 2D matrix of size mxn is created as per users requirement.
    int array[m][n];
    // Loops take input of array elements.
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    // Loops print the matrix.
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    int sumrow , sumcol;
    // Finding sum of row.
    for (int i=0; i<m; i++) {
        sumrow = 0;
        for (int j=0; j<n; j++) {
        sumrow = sumrow + array[i][j];
        }
        printf("Sum of row %d: %d\n",i+1,sumrow);
    }
    printf("\n");
    // Finding sum of column.
    for (int i=0; i<n; i++) {
        sumcol = 0;
        for (int j=0; j<m; j++) {
            sumcol = sumcol + array[j][i];
        }
        printf("Sum of column %d: %d\n",i+1,sumcol);
    }
}