/*
Write a program containing a function which reverses the array passed to it.
*/
#include<stdio.h>

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int ptr[], int n) {
    int temp = 0;
    for(int i = 0; i < (n/2); i++) {
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
    // for(int i = (n/2); i < n; i++) {
    //     temp = ptr[i];
    //     ptr[i] = ptr[n-i-1];
    //     ptr[n-i-1] = temp;
    // }
}

int main() {

    int arr[] = { 1, 2, 3, 4, 5, 6};
    int n = 6;

    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);

    return 0;
}