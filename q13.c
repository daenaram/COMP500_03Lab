#include <stdio.h>
int main(){
    int whole;
    char ascii;
    float real;
    
    printf("Whole number?\n");
    scanf("%d", &whole);
    printf("ASCII character?\n");
    scanf(" %c", &ascii);
    printf("Real number?\n\n");
    scanf("%f", &real);
    printf("The user's input was:\n");
    printf("\n");
    printf("Whole number is:     %d\n", whole);
    printf("ASCII character is:  %c\n", ascii);
    printf("Real number is:      %f\n", real);
    
    return 0;
}

// *** RESULT *** 
// Whole number?
// ASCII character?
// Real number?

// The user's input was:

// Whole number is:     123
// ASCII character is:  m
// Real number is:      321.500000
