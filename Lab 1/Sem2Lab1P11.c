// 17th January , 2022
// Practice Activity - 1.
// Mridul Vasudeva
// A C program to Add, Subtract and multiply two complex numbers.
#include <stdio.h>

struct complex {
    int real;
    int img;
};
struct complex num1 , num2;

void AddComplex (struct complex num1 , struct complex num2) {
    int AddReal = (num1.real + num2.real);
    int Addimg = (num1.img + num2.img);
    printf("\nAddition of two complex numbers is: %d + %di ",AddReal,Addimg);    
}

void SubtractComplex (struct complex num1 , struct complex num2) {
    int SubReal = (num1.real - num2.real);
    int Subimg = (num1.img - num2.img);
    printf("\nSubtraction of two complex numbers is: %d + %di ",SubReal,Subimg);
}

void MultiplyComplex (struct complex num1 , struct complex num2) {
    int mulreal = (num1.real*num2.real);
    int mulrimg = (num1.real*num2.img);
    int mulimgrl = (num2.real*num2.img);
    int mulimgi = -(num1.img*num2.img);

    int addimg = mulimgrl + mulrimg;
    int addimgrl = mulreal + mulimgi; 

    printf("\nMultiplication of two complex numbers is: %d + %di",addimgrl,addimg);
}

void main () {
    printf("Enter num 1 (real & imaginary): ");
    scanf("%d %d",&num1.real , &num1.img);

    printf("Enter num 2 (real & imaginary): ");
    scanf("%d %d",&num2.real , &num2.img);

    printf("\nNum 1 is: %d + %di\n",num1.real , num1.img);
    printf("Num 2 is: %d + %di\n",num2.real , num2.img);

    printf("\n\n\t\t\t*MENU*\n");
    printf("\t1 to Add two complex numbers\n");
    printf("\t2 to Subtract two complex numbers\n");
    printf("\t3 to Multiply two complex numbers\n");

    int ch;
    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    switch (ch) {
        case 1: {
    AddComplex(num1 , num2);
    printf("\n");
    break;
        }
        case 2: {
    SubtractComplex(num1 , num2);
    printf("\n");
    break;
        }
        case 3: {
    MultiplyComplex(num1 ,num2);
    printf("\n");
    break;
        }
    }
}
