/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/
#include<stdio.h>

int* sum(int a, int b) {
    int s = a+b;
    int* ptr = &s;
    printf("The sum of %d and %d is %d\n", a, b, s);
    return ptr;
}

float* average(int a, int b) {
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The sum of %d and %d is %.2f\n", a, b, avg);
    return ptr;
}

int main() {

    int x, y;
    int* ptr1;
    float* ptr2;

    printf("Enter numbers: ");
    scanf("%d %d", &x, &y);
    
    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("The address of sum and average is %u and %u respectively.\n", ptr1, ptr2);

    return 0;
}