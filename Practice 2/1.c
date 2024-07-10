/*
Write a program to check whether a number is divisible by 97 or not.
*/
#include<stdio.h>

int main()
{
    int num;

    printf("Enter your desired number: ");
    scanf("%d",&num);

    // if (num%97 == 0)
    // {
    //     printf("%d is divisible by 97", num);
    // }
    // else
    // {
    //     printf("%d is not divisible by 97", num);        
    // }

    // Ternary operator
    num%97==0 ? printf("%d is divisible by 97", num) : printf("%d is not divisible by 97", num);
    

    return 0;
}