/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2
*/
#include<stdio.h>

float force(float mass) {
    return mass*9.8;
}

int main() {

    float mass;

    printf("Enter the mass: ");
    scanf("%f", &mass);
    
    printf("The force of attraction on the body of mass %.2f kg is %.2f N", mass, force(mass));

    return 0;
}
