/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/
#include<stdio.h>

int main() {

    int sum = 0;

    for (int i = 1; i < 11; i++)
        sum += 8*i;
    
    printf("The sum of the numbers occuring in the multiplication table of 8 is %d.\n", sum);
    
    return 0;
}