/*
Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.
*/
#include<stdio.h>

char* slicestr(char str[], int m, int n) {
    char temp[n-m+2];
    int j = 0;
    for(int i = m; i <= n; i++, j++) {
        temp[j] = str[i];
    }
    temp[j] = '\0';

    for(int i = 0; i <= n-m+1; i++) {
        str[i] = temp[i];
    }
    str[j] = '\0';
    return str;    
}

char* myslicev2(char str[], int m, int n) {
    str = &str[m];
    str[n-m+1] = '\0';
    return str;
}

int main() {

    char str1[] = "Himanshu Srivastav";
    char str2[] = "Himanshu Srivastav";
    char str3[] = "To kaise hai aap log";
    char str4[] = "To kaise hai aap log";

    int m = 6, n = 11;

    printf("After slicing from slicestr string %s from %d to %d: ", str1, m, n);
    printf("%s\n", slicestr(str1, m, n));
    // printf("After slicing from myslicev2 string %s from %d to %d: ", str2, m, n);
    // printf("%s\n", myslicev2(str2, m, n));

    // printf("After slicing from slicestr string %s from %d to %d: ", str3, m, n);
    // printf("%s\n", slicestr(str3, m, n));
    printf("After slicing from myslicev2 string %s from %d to %d: ", str4, m, n);
    printf("%s\n", myslicev2(str4, m, n));

    return 0;
}