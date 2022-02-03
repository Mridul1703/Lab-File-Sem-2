#include <stdio.h>

void main() {
    int m , n;
    printf("Enter size of matrix [m] [n]: ");
    scanf("%d %d",&m,&n);
    // A 2D matrix of size mxn is created as per users requirement.
    int array1[m][n] , array2[m][n] , array3[m][n];

    printf("\nInput elements for 1st array:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    printf("\n");
    printf("Input elements for 2nd array:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%d",&array2[i][j]);
        }
    }

    int arraymul;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            arraymul = 0;
            for (int x=0; x<n; x++) {
                arraymul += array1[i][x]*array2[x][j];
            }
        array3[i][j] = arraymul;
        }
    }

    printf("\nMultiplication of two matrices is:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }

}