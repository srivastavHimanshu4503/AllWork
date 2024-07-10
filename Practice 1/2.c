/*
2. Calculate the area of circle and modify the same program to calculate volume of cylinder given its radius and height.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    const float pi = 3.14;
    float rad, height;


    printf("Enter radius: ");
    scanf("%f",&rad);

    float area = pi*rad*rad;

    printf("Area of circle is %.2fcm^2.\n", area);

    printf("Enter height: ");
    scanf("%f",&height);

    float volume = area*height;
    printf("The volume of cylinder is %.2f cubic cm.", volume);

    return 0;
}