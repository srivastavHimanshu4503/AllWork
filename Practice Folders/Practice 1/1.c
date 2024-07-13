/*
1. Area of rectangle using 
a) Hard input
b) From user 
*/

#include<stdio.h>

int main () {
    // Area of rectangle = length * breadth
    float a, b;
    // a) Hard input
    a = 6.5;
    b = 3.2;
    printf("Area of rectangle having %.2fcm length and %.2fcm breadth is %.2f cm^2.\n", a, b, a*b);


    //b) User input 
    printf("Enter length: ");
    scanf("%f",&a);

    printf("Enter breadth: ");
    scanf("%f",&b);

    printf("Area of rectangle is %.2fcm^2", a*b);

    return 0;
}