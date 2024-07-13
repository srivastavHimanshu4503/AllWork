/*
Write a program to sum first ten natural numbers using while loop, for loop, do-while loop.
*/
#include <stdio.h>

int main() {

    int i = 1;
    int sum = 0;

    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("Using while loop:\n");
    printf("The sum of first ten natural numbers is %d.\n", sum);

    int sum2 = 0;
    for (int i = 1; i < 11; i++)
        sum2 += i;
    printf("Using for loop:\n");
    printf("The sum of first ten natural numbers is %d.\n", sum2);

    int j = 1, sum3 = 0;
    do {
        sum3 += j;
        j++;
    } while (j<11);
    
    printf("Using do-while loop:\n");
    printf("The sum of first ten natural numbers is %d.\n", sum3);

    return 0;
}