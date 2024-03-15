#include <stdio.h>
int main(){
    float num1, num2, num3, num4, num5, num6, num7, product;
    
    printf("Input real number 1:\n");
    scanf("%f", &num1);
    printf("Input real number 2:\n");
    scanf("%f", &num2);
    printf("Input real number 3:\n");
    scanf("%f", &num3);
    printf("Input real number 4:\n");
    scanf("%f", &num4);
    printf("Input real number 5:\n");
    scanf("%f", &num5);
    printf("Input real number 6:\n");
    scanf("%f", &num6);
    printf("Input real number 7:\n");
    scanf("%f", &num7);
    printf("\n");
    printf("Input was: { %.2f, %.2f, %.2f, %.2f, %.2f, %.2f, %.2f }\n", num1, num2, num3, num4, num5, num6, num7);
    product = num1 * num2 * num3 * num4 * num5 * num6 * num7; 
    printf("\n");
    printf("The product of the numbers input is: %0.2f\n", product);
}

// *** RESULT *** 
// Input real number 1:
// Input real number 2:
// Input real number 3:
// Input real number 4:
// Input real number 5:
// Input real number 6:
// Input real number 7:

// Input was: { 5.10, 1.20, 0.70, 2.50, 0.38, 2.00, 4.10 }

// The product of the numbers input is: 33.37
