// still doesnt work
#include <stdio.h>
#include <math.h>

#define PI 3.14159f

int main() {
    float hypotenuse, angle_degrees;
    float opposite, adjacent;
    float angle_radians;
    
    printf("What is the angle in degrees?\n");
    scanf("%f", &angle_degrees);

    printf("What is the length of the hypotenuse?\n\n");
    scanf("%f", &hypotenuse);

    angle_radians = angle_degrees * (PI / 180.0f);

    opposite = sin(angle_radians) * hypotenuse;
    adjacent = cos(angle_radians) * hypotenuse;

    printf("The length of the opposite is: %f\n", opposite);
    printf("The length of the adjacent is: %f\n", adjacent);

    return 0;
}

