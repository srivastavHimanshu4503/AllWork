/*
Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include<stdio.h>

int sumOfFirstN_naturalNumbers(int n) {
    if (n == 1 || n == 0)
        return 1;

    return n + sumOfFirstN_naturalNumbers(n-1);    
}

int main() {

    int userInput;

    printf("Enter the value: ");
    scanf("%d", &userInput);
    
    printf("Sum of first %d natural numbers is %d.\n", userInput, sumOfFirstN_naturalNumbers(userInput));

    return 0;
}