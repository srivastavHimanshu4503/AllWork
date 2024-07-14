/*
Write a program to convert Celsius to Farenheit.
*/
#include<stdio.h>

int main()
{
    float cel;

    printf("Enter value of celsius: ");
    scanf("%f",&cel);

    printf("The value of farenheit is %f", (9.0/5.0)*cel + 32);

    return 0;
}