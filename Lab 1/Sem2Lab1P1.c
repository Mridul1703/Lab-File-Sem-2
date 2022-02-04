// 17th January , 2022
// Practice Activity - 1 , Question 1.
// Mridul Vasudeva
// A C program to find transpose and inverse of a matrix.
#include <stdio.h>

void main() {
    int m , n;
    printf("Enter size of matrix [m]x[n]: ");
    scanf("%d %d",&m,&n);
    
    float array[m][n];
    printf("\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%f",&array[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%g ",array[i][j]);
        }
    printf("\n");
    }

    // Calculates transpose of matrix
    printf("\nTranspose of matrix:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%g ",array[j][i]);
        }
    printf("\n");
    }

    // Calculates inverse of matrix
    printf("\nInverse of the matrix:\n");
    if(m == 2 && n == 2) {
        float temp = array[0][0];
        array[0][0] = array[1][1];
        array[1][1] = temp;
        array[0][1] = array[0][1]*(-1);
        array[1][0] = array[1][0]*(-1);
        float det2x2 = array[0][0]*array[1][1] - array[0][1]*array[1][0];
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                printf("%g ",(1/det2x2)*array[i][j]);
            }
            printf("\n");
        }
    }
}