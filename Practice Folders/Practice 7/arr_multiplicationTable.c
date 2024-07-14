/*
Write a program to create an array of 10 integers and store multiplication table for a general input provided by the user using scanf.
*/
#include<stdio.h>

int main() {

    int multiplicationTable[10];
    int input;

    printf("Enter number: ");
    scanf("%d", &input);
    
    for(int i = 0; i < 10; i++)
        multiplicationTable[i] = input*(i+1);

    printf("Multiplication table of %d is :", input);
    for(int i = 0; i < 10; i++)
        printf("%d ", multiplicationTable[i]);
        
    return 0;
}