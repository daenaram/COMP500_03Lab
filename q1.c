#include <stdio.h>
int main(){
    
    int base;
    
    printf("Please enter a base:\n");
    scanf("%d", &base);
    printf("The powers of %d are:\n\n", base);
    
    printf("%d ^ 0 is 1\n", base);
    printf("%d ^ 1 is %d\n", base, base * 1);
    printf("%d ^ 2 is %d\n", base, base * base);
    printf("%d ^ 3 is %d\n", base, base * base * base);
    printf("%d ^ 4 is %d\n", base, base * base * base * base);
    printf("%d ^ 5 is %d\n", base, base * base * base * base * base);
    printf("%d ^ 6 is %d\n", base, base * base * base * base * base * base);
    printf("%d ^ 7 is %d\n", base, base * base * base * base * base * base * base);
    printf("%d ^ 8 is %d\n", base, base * base * base * base * base * base * base * base);
    
    return 0;
}

// *** RESULT ***  
// Please enter a base:
// The powers of 2 are:

// 2 ^ 0 is 1
// 2 ^ 1 is 2
// 2 ^ 2 is 4
// 2 ^ 3 is 8
// 2 ^ 4 is 16
// 2 ^ 5 is 32
// 2 ^ 6 is 64
// 2 ^ 7 is 128
// 2 ^ 8 is 256

