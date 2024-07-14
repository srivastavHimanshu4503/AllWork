/*
Create an array of size 3 x 10 containing multiplication tables for custom input provided by the user
*/
#include<stdio.h>

int main() {

    int arr[3][10];
    int num[3];

    printf("Enter three numbers: ");
    for(int i = 0; i < 3; i++)
        scanf("%d",&num[i]);

    for(int i = 0; i < 3; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 10; j++)
            arr[i][j] = num[i]*(j+1);

    printf("Multiplcation table of %d, %d and %d is given below:\n", num[0], num[1], num[2]);
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}