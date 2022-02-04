// 17th January , 2022
// Practice Activity - 1 , Question 2.
// Mridul Vasudeva
// A C program to find if a given matrix is a sparse matrix or not.
#include <stdio.h>

int FindSparse(int *array , int m , int n) {
    int count = 0;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (*(array+i+j) == 0) {
                count++;
            }
        }
    }
    return count;
}

void main() {
    int m , n;
    printf("Enter size of matrix[m] [n]: ");
    scanf("%d %d",&m,&n);

    int array[m][n];

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    int ele = m*n;
    int c = FindSparse((int *)array , m , n);

    if(c > (ele/2)) {
        printf("\nIt is a Sparse Matrix\n");
    } else {
        printf("\nIt is not a sparse Matrix\n");
    }
}
