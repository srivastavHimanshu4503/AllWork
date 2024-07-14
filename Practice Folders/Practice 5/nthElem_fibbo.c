/*
Write a program using recursion to calculate nth element of Fibonacci series.
*/
#include<stdio.h>

int fibbo(int num) {
    /*
    if(num == 1)
        return 0;
    else if (num == 2)
        return 1;
    else
        return fibbo(num-1) + fibbo(num-2);
    */ 
    if (num == 1 || num == 2) 
        return num-1;
    else 
        return fibbo(num-1) + fibbo(num-2);
}

int main() {

    printf("Fibbo: %d\n", fibbo(1));
    printf("Fibbo: %d\n", fibbo(2));
    printf("Fibbo: %d\n", fibbo(3));
    printf("Fibbo: %d\n", fibbo(4));
    printf("Fibbo: %d\n", fibbo(5));
    printf("Fibbo: %d\n", fibbo(6));
    printf("Fibbo: %d\n", fibbo(7));
    printf("Fibbo: %d\n", fibbo(8));
    printf("Fibbo: %d\n", fibbo(9));

    return 0;
}