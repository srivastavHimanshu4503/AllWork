/*
Write a program to check whether a given character is present in a string or not.
*/
#include<stdio.h>
#include<string.h>

int presentOrNot(char str[], char character) {
    for(int i = 0; i < strlen(str); i++)
        if (str[i] == character)
            return 1;

    return 0;
}

int main() {

    char str[20];
    char character;

    printf("Enter the string without leaving any spaces: ");
    scanf("%s", str);

    printf("Enter the character you want to check: ");
    scanf(" %c", &character);

    if (presentOrNot(str, character)) 
        printf("%c is present in %s", character, str);
    else 
        printf("%c is not present in %s", character, str);
    
    return 0;
}