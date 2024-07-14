/*
Write a program to change the value of a variable to ten times of its current
value.
*/
#include<stdio.h>

void changeValue(float* val) {
    *val = (*val)*10;
}

int main() {

    float val;
    printf("Enter value: ");
    scanf("%f", &val);
    
    changeValue(&val);
    printf("Change Value: %.2f", val);

    return 0;
}