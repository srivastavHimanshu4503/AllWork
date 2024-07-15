/*
Write a structure capable of storing date. Write a function to compare those dates.
*/
#include<stdio.h>

typedef struct Date {
    int day;
    int month;
    int year;
}d;

int compare(d d1, d d2) {
    if(d1.year == d2.year && d1.month == d2.month && d1.day == d2.day) {
        printf("Both dates are exactly similar.");
        return -1;
    }
    if(d1.year < d2.year) 
        return 1;
    else if(d1.month < d2.month) 
        return 1;
    else if(d1.day < d2.day)
        return 1;
    else
        return 0;
    
    return 0;
}

int main() {

    d d1 = {4, 5, 2005};
    d d2 = {5, 9, 2008};

    if(compare(d1, d2) >= 0) {
        if (compare(d1, d2)) 
            printf("d1 is greater than d2");
        else
            printf("d2 is greater than d1");
    }
    
    return 0;
}