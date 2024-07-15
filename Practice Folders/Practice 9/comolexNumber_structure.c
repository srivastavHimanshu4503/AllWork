/*
Write a program with a structure representing a complex number.
*/
#include<stdio.h>

typedef struct complexNumber {
    int real;
    int imaginary;
}cn;

int main() {

    cn c1;
    printf("Enter the real part of complex numebr: ");
    scanf("%d", &c1.real);
    
    printf("Enter the imaginary part of complex number: ");
    scanf("%d", &c1.imaginary);
    
    printf("The complex number is %d + %di\n", c1.real, c1.imaginary);

    return 0;
}