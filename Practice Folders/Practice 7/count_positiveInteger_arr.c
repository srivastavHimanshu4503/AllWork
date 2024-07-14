/*
Write a program containing functions which counts the number of positive
integers in an array.
*/
#include<stdio.h>

int countPositiveValues(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] >= 0)
            count++;
    
    return count;
}

int main() {

    int arr[] = {3, -2, 5, 1, 0, -3};

    printf("Positive numbers in the given array is %d\n", countPositiveValues(arr, 6));

    return 0;
}
