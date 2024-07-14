/*
Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/
#include<stdio.h>

void display(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {

    int num;

    printf("Enter the value: ");
    scanf("%d", &num);
    
    display(num);

    return 0;
}