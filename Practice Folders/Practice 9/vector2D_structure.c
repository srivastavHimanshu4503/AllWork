/*
Create a two-dimensional vector using structures in C
*/
#include<stdio.h>

struct vector {
    int magnitude_x_coordinate;
    int magnitude_y_coordinate;
};

int main() {

    struct vector v1;
    printf("Enter magnitude of i cap: ");
    scanf("%d", &v1.magnitude_x_coordinate);
    
    printf("Enter magnitude of j cap: ");
    scanf("%d", &v1.magnitude_y_coordinate);

    printf("Vector v1 is %di + %dj", v1.magnitude_x_coordinate, v1.magnitude_y_coordinate);

    return 0;
}