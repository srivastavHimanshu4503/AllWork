/*
Write a program to decrypt the string encrypted using encrypt function.
*/
#include<stdio.h>

void decryptString(char str[]) {
    char temp = str[0];
    int i = 0;
    while(str[i] != '\0') {
        str[i] -= 1;
        i++;
    }
}

int main() {

    char EncryptedString[] = "IjnAotiTsjwAtuAw56114AHnAjM/d1N`HPPHMF";
    printf("Encrypted string: %s\n", EncryptedString);

    decryptString(EncryptedString);
    printf("Original/Decrypted string: %s\n", EncryptedString);

    return 0;
}