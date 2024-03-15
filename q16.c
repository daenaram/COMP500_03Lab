#include <stdio.h>
int main(void){
    char digits[9] = {'\0'};
    
    printf("Input 8 digits or less:\n");
    scanf("%8s", digits);
    
    printf("digits[%d] is ASCII char: %c (%d)\n", 0, digits[0], digits[0]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 1, digits[1], digits[1]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 2, digits[2], digits[2]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 3, digits[3], digits[3]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 4, digits[4], digits[4]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 5, digits[5], digits[5]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 6, digits[6], digits[6]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 7, digits[7], digits[7]);
    printf("digits[%d] is ASCII char: %c (%d)\n", 8, digits[8], digits[8]);
}

// *** result *** 
// Input 8 digits or less:
// digits[0] is ASCII char: 8 (56)
// digits[1] is ASCII char: 7 (55)
// digits[2] is ASCII char: 6 (54)
// digits[3] is ASCII char: 5 (53)
// digits[4] is ASCII char: 4 (52)
// digits[5] is ASCII char: 3 (51)
// digits[6] is ASCII char: 2 (50)
// digits[7] is ASCII char: 1 (49)
// digits[8] is ASCII char: \x00 (0)
