/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
    Income Slab Tax
    2.5 – 5.0L      5%
    5.0L - 10.0L    20%
    Above 10.0L     30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
#include<stdio.h>

int main()
{
    float annualIncome;

    // All calculation are taking place in decimals.
    printf("Provide your annual income in lacs: ");
    scanf("%f",&annualIncome);

    if(annualIncome >= 10.0) {
        float tax = (0.05*2.5 + 5.0*0.2 + (annualIncome-10.0)*0.3)*100000;
        printf("You need to pay a total of %.2f lacs tax as your annual income is above 10 lacs.", tax);
    }
    else if(annualIncome < 10.0 && annualIncome >= 5.0) {
        float tax = (2.5*0.05 + (annualIncome-5.0)*0.2)*100000;
        printf("You need to pay a total of %.2f lacs tax as your annual income is %.2f lacs.",tax, annualIncome);
    }
    else if(annualIncome < 5.0 && annualIncome >= 2.5) {
        int tax = ((annualIncome - 2.5)*0.05)*100000;
        printf("You need to pay a total of Rs %d tax as your annual income is %.2f lacs.",tax, annualIncome);
    }
    else {
        printf("You do not need to pay any tax since your annual income is below 2.5 lacs.");
    }

    return 0;
}