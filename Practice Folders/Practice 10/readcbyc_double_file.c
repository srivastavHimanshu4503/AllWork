/*
Write a program to read a text file character by character and write its content twice in separate file.
*/
#include<stdio.h>

int main() {

    FILE* ptr1;
    FILE* ptr2;

    ptr2 = fopen("file3.txt", "w");
    char ch;

    int i = 0;
    while ( i < 2) {
        ptr1 = fopen("file2.txt", "r");
        while (1) {
            ch = fgetc(ptr1);
            if (ch == EOF)
                break;
            fprintf(ptr2, "%c", ch);
        }
        fprintf(ptr2, "%c", '\n');
        i++;
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}