/*
Write your own version of strcpy function from <string.h>
*/
#include<stdio.h>
#include<string.h>

void mystrcpy(char target[], char source[], int size) {
    int j = 0;
    for(int i = 0; i < size; i++) {
        target[i] = source[i];
        j = i;
    }
    target[j] = '\0';
}

int main() {

    char source[] = "khiladi";

    int size = strlen(source) + 1;
    char target[size];

    mystrcpy(target, source, size);

    printf("%s\n", source);
    printf("%s", target);


    return 0;
}