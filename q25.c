#include <stdio.h>

int main() {
    float vector[3];
    float scalar;
    
    printf("vx?\n");
    scanf("%f", &vector[0]);
    printf("vy?\n");
    scanf("%f", &vector[1]);
    printf("vz?\n\n");
    scanf("%f", &vector[2]);
    
    printf("v = < %f, %f, %f >\n\n", vector[0], vector[1], vector[2]);

    printf("Scalar Multiplier?\n");
    scanf("%f", &scalar);

    // Compute and output the scalar multiplication of the vector
    printf("%fv = < %f, %f, %f >\n", scalar,
           vector[0] * scalar, vector[1] * scalar, vector[2] * scalar);

    return 0;
}

// *** result *** 
// vx?
// vy?
// vz?
