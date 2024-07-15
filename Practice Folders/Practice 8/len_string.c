/*
Write your own version of strlen function from <string.h>
*/
#include <stdio.h>

int srlen(char str[]) {
    int i=0;
    char c = str[i];
    while(c != '\0') {
        c = str[i];
        i++;
    }
    return (i-1);
}
int main(){
    char str[] = "Himanshu Srivastav";

    printf("The length of string %s is %d\n", str, srlen(str));

    return 0;
}