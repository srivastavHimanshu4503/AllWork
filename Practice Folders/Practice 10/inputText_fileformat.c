/*
Take name and salary of two employees as input from the user and write them to a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include<stdio.h>

typedef struct employee {
    char name[20];
    int salary;
}Emp;

int main() {

    FILE* ptr;
    ptr = fopen("file4.txt", "w");

    Emp e1, e2;

    printf("Enter the name and salary of employee 1: ");
    scanf("%s %d", &e1.name, &e1.salary);

    printf("Enter the name and salary of employee 2: ");
    scanf("%s %d", &e2.name, &e2.salary);

    fprintf(ptr, "%s%c %d %c", e1.name, ',',  e1.salary, '\n');
    fprintf(ptr, "%s%c %d %c", e2.name, ',', e2.salary, '\n');

    fclose(ptr);    

    return 0;
}