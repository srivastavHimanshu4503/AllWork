/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.
2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True. 
(ii) False. ✔✔✔✔
(iii) Depends.
*/
#include<stdio.h>

int main() {

    int marks[] = {36, 72, 48, 62, 56, 96, 78, 64, 99, 87};

    int* ptr = marks;

    printf("Third element of array marks is %d\n", marks[2]);
    printf("Third element of array marks is %d\n", *(ptr+2));

    return 0;
}