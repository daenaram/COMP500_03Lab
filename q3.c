#include <stdio.h> 
#include <math.h>
int main() {
    
    int number;
    
    printf("Input a number:\n");
    scanf("%d", &number);
    
    int digit = floor(log10f(number)) + 1;
    printf("%d is %d digit(s).", number, digit);
}

// *** RESULT *** 
// Input a number:
// 1000 is 4 digit(s). 
