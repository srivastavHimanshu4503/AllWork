/*
Write a function to convert Celsius temperature into Fahrenheit.
*/
#include<stdio.h>

float celsiusTofarenheit(float temperature) {
    return ((9.0/5.0)*temperature + 32);
}

int main() {

    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    printf("Temperature in Farenheit is %.2f.\n", celsiusTofarenheit(celsius));

    return 0;
}