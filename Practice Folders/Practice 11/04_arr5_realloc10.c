/*
Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
*/
#include<stdio.h>
#include<stdlib.h>

int main() {

    int* ptr;
    ptr = (int*) calloc(5, sizeof(int));

    ptr = realloc(ptr, 10);
    free(ptr);
    return 0;
}