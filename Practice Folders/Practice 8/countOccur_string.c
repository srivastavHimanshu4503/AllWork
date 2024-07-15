/*
Write a program to count the occurrence of a given character in a string.
*/
/*
Case 1: In this case, the code will run properly. If we scan charcter first and then scan string then we do not need  to using while((getchar()) != '\n')
    printf("Enter the character whose number of occurence you want to find: ");
    scanf("%c", &character);

    printf("Enter the string without leaving any spaces: ");
    scanf("%s", str);

Case 2:Reading the character with " %c" ensures any leading whitespace (including newlines) is skipped.
    This approach avoids the need to manually clear the input buffer.
    printf("Enter the string without leaving any spaces: ");
    scanf("%s", str);

    printf("Enter the character whose number of occurence you want to find: ");
    scanf(" %c", &character);
*/
#include<stdio.h>

int countOccurenceString(char str[], char character) {
    int countCharcter = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == character)
            countCharcter++;        
    }
    return countCharcter;
}

int main() {

    char str[50];
    char character;
    
    printf("Enter the string without leaving any spaces: ");
    scanf("%s", str);

    while((getchar()) != '\n'); // Clear input buffer so that next scanf work properly.

    printf("Enter the character whose number of occurence you want to find: ");
    scanf("%c", &character);
    
    printf("Occurence of %c in %s is %d\n", character, str, countOccurenceString(str, character));

    return 0;
}
