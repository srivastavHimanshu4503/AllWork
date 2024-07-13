/*
Write a program to print multiplication table of a given number n.
*/
#include<stdio.h>

int main() {
    int num;
    
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &num);
    
    printf("The table of %d is given below:\n", num);

    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num*i);
    
    return 0;
}