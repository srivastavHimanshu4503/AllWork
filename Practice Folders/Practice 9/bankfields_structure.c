/*
Create a structure representing a bank account of a customer. What fields did
you use and why?
*/
#include<stdio.h>

typedef struct bank_customer {
    char name[20];
    double accountNumber;
    float balance;
    double contactnumber;
}bc;

int main() {

    bc c1;
    printf("Enter customer name: ");
    scanf("%s",&c1.name);

    printf("Enter customer account number: ");
    scanf("%lf", &c1.accountNumber);
    
    printf("Enter customer contact number: ");
    scanf("%lf",&c1.contactnumber);

    printf("Enter customer balance details: ");
    scanf("%f", &c1.balance);
    
    printf("Our customer name is %s having account number %.0lf, mobile number %.0lf and has Rs %.2f in the bank account.", c1.name, c1.accountNumber, c1.contactnumber, c1.balance);  
    
    return 0;
}