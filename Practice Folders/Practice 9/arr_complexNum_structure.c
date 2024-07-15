/*
Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.
*/
#include<stdio.h>

typedef struct complexNumber {
    int real;
    int imaginary;
}cn;    

void displayArr(cn c) {
    printf("The complex number is %d + %di\n", c.real, c.imaginary);
}

int main() {

    cn c[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Enter real part: ");
        scanf("%d", &c[i].real);
        
        printf("Enter imaginary part: ");
        scanf("%d", &c[i].imaginary);
        
        displayArr(c[i]);
    }
    
    return 0;
}