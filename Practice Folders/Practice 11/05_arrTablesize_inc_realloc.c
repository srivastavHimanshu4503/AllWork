/*
Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).*/
#include<stdio.h>
#include<stdlib.h>

int main() {

    int* ptr;
    ptr = (int*) calloc(10, sizeof(int));

    for(int i = 0; i < 10; i++)
        ptr[i] = 7*(i+1);

    printf("Multiplication table of 7 upto 10: ");
    for(int i = 0; i < 10; i++) 
        printf("%d ", ptr[i]);
    printf("\n");

    ptr = realloc(ptr, 15 * sizeof(int));
    for(int i = 0; i < 15; i++) 
        ptr[i] = 7*(i+1);

    printf("Multiplication table of 7 upto 15: ");
    for(int i = 0; i < 15; i++) 
        printf("%d ", ptr[i]);
    printf("\n");

    free(ptr);
    return 0;
}