/*
Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
*/
#include<stdio.h>

int main() {

    int i = 5;

    int *j = &i;

    int **k = &j;

    printf("The value of i using i is %d\n", i);
    printf("The value of i using j is %d\n", *j);
    printf("The value of i using k is %d\n", **k);

    return 0;
}