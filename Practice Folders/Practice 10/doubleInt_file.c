/*
Write a program to modify a file containing an integer to double its value.
*/
#include<stdio.h>

int main() {

    FILE* ptr1;
    FILE* ptr2;
    ptr1 = fopen("file5.txt", "r");
    // ptr2 = fopen("file6.txt", "w");

    int num1, num2, num3;
    fscanf(ptr1, "%d %d %d", &num1, &num2, &num3);
    fclose(ptr1);

    ptr1 = fopen("file5.txt", "w");
    fprintf(ptr1, "%d %d %d", num1*2, num2*2, num3*2);

    fclose(ptr1);
    return 0;
}