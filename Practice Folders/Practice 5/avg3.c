/*
Write a program using function to find average of three numbers
*/
#include<stdio.h>

float avgthree(int a, int b, int c) {
    return (float) (a+b+c)/3;
}

int main() {

    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("The average of %d, %d and %d is %.2f", num1, num2, num3, avgthree(num1, num2, num3));

    return 0;
}