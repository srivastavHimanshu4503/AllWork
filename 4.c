/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/
#include<stdio.h>

int main()
{
    char val;
    printf("Enter your character: ");
    scanf("%c", &val);
    
    if (val >= 'a' && val <= 'z')
        printf("%c is a lowercase letter.", val);
    else
        printf("%c is not a lowercase letter.", val);

    return 0;
}