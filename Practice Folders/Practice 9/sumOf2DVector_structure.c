/*
Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.
*/
#include<stdio.h>

struct vector {
    int magnitude_x_coordinate;
    int magnitude_y_coordinate;
};

struct vector sumVector(struct vector v1, struct vector v2) {
    struct vector v3;
    v3.magnitude_x_coordinate = v1.magnitude_x_coordinate + v2.magnitude_x_coordinate; 
    v3.magnitude_y_coordinate = v1.magnitude_y_coordinate + v2.magnitude_y_coordinate; 
    return v3;
}

int main() {

    struct vector v1, v2;
    printf("Enter magnitude for v1 of i cap: ");
    scanf("%d", &v1.magnitude_x_coordinate);
    
    printf("Enter magnitude for v1 of j cap: ");
    scanf("%d", &v1.magnitude_y_coordinate);

    printf("Enter magnitude for v2 of i cap: ");
    scanf("%d", &v2.magnitude_x_coordinate);
    
    printf("Enter magnitude for v2 of j cap: ");
    scanf("%d", &v2.magnitude_y_coordinate);

    struct vector v3 = sumVector(v1, v2);

    printf("The sum of vector v1 and v2 is %di + %dj\n", v3.magnitude_x_coordinate, v3.magnitude_y_coordinate);

    return 0;
}