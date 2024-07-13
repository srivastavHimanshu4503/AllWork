/*
Write a program to check whether a given number is prime or not using every type of loops.
*/
#include<stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Using for loop: ");
    int count = 0;
    for(int i=1; i <= (num/2); i++) {
        if (num%i == 0)
            count++;
    }
    if (count == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);


    printf("Using while loop: ");
    count = 0;
    int j=1;
    while (j<(num/2)) {
        if(num%j == 0)
            count++;
        j++;
    }
    if (count == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    printf("Using do-while loop: ");
    count = 0;
    int k=1;
    do {
        if(num%k == 0)
            count++;
        k++;
    }while (k<(num/2));
    if (count == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
