#include <stdio.h>

int main(){
    
    char input;
    
    printf("Please input a letter, digit or symbol:\n");
    scanf(" %c", &input);
    printf("The ASCII value for %c in base-10 is %d\n", input, input);
    printf("The ASCII value for %c in base-16 is 0x%x", input, input);
    
    return 0;
}

// *** RESULT *** 
// Please input a letter, digit or symbol:
// The ASCII value for a in base-10 is 97
// The ASCII value for a in base-16 is 0x61
