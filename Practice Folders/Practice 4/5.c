/*
Write a program to calculate the factorial of a given number using a for loop and while loop.
*/
#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Using for loop:\n");
    int fact1 = 1;
    for(int i=num; i; i--)
        fact1 *= i;

    printf("Factorial of %d is %d.\n", num, fact1);
    
    printf("Using while loop:\n");
    int fact2 = 1;
    int i = num;
    while (i)
    {
        fact2 *= i;
        i--;
    }
    
    printf("Factorial of %d is %d.\n", num, fact2);

    return 0;
}