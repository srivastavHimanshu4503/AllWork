/*
Write a program to encrypt a string by adding 1 to the ascii value of its characters.
*/
#include<stdio.h>

void encryptString(char str[]) {
    char temp = str[0];
    int i = 0;
    while(str[i] != '\0') {
        str[i] += 1;
        i++;
    }
}

int main() {

    char str[20];
    printf("Enter string: ");
    scanf("%s", &str);
    
    printf("Original string: %s\n", str);
    encryptString(str);
    printf("Encrypted string: %s\n", str);

    return 0;
}