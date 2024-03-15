#include <stdio.h>
#include <math.h>

int main() {
    float adjacent, opposite, hypotenuse;

    printf("Enter the length of the adjacent side:\n");
    scanf("%f", &adjacent);

    printf("Enter the length of the opposite side:\n\n");
    scanf("%f", &opposite);

    hypotenuse = sqrtf(adjacent * adjacent + opposite * opposite);

    printf("The hypotenuse is %f in length.\n", hypotenuse);

    printf("\n");
    printf("          +\n");
    printf("          |\\\n");
    printf("          | \\\n");
    printf(" %f|  \\  %f\n", opposite, hypotenuse);
    printf("          |   \\\n");
    printf("          |    \\\n");
    printf("          +-----+\n");
    printf("          %f     \n", adjacent);
    
    printf("\n");
    printf("Note: Right-angle triangle is not drawn to scale!");

    return 0;
}

// *** result *** 
// Enter the length of the adjacent side:
// Enter the length of the opposite side:

// The hypotenuse is 36.400551 in length.

//          +
//          |\
//          | \
// 10.000000|  \  36.400551
//          |   \
//          |    \
//          +-----+
//          35.000000

// Note: Right-angle triangle is not drawn to scale!
