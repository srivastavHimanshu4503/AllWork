/*
Write a program for calculating simple interest for set of values representing principle, number of years and rate of interest.
*/
#include<stdio.h>

int main()
{
    int principal = 20000;
    float rate = 8.3;
    int time = 20;

    float interest = (principal*rate*time)/100;

    printf("Simple interest for %d at the rate of %.1f for %d years is Rs %.1f.", principal, rate, time, interest);

    return 0;
}