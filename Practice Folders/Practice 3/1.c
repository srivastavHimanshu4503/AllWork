/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/
#include<stdio.h>

int main()
{
    int marks_sub1, marks_sub2, marks_sub3;

    printf("Enter the marks for subject 1: ");
    scanf("%d",&marks_sub1);

    printf("Enter the marks for subject 2: ");
    scanf("%d",&marks_sub2);

    printf("Enter the marks for subject 3: ");
    scanf("%d",&marks_sub3);

    int total = marks_sub1 + marks_sub2 + marks_sub3;

    if(total>=120 && marks_sub1 >= 33 && marks_sub2 >= 33 && marks_sub3 >= 33)
        printf("You are passed.");
    else
        printf("You are not passed.");

    return 0;
}