#include <stdio.h>
#include <string.h>

int main(){
    char five[6], copy[6];
    
    printf("Type in a lowercase five letter word:\n\n");
    scanf("%5s", five);
    
    strcpy(copy, five);
    
    for (int i = 0; i < strlen(copy); i++) {
        if (copy[i] >= 'a' && copy[i] <= 'z') {
            // If the character is lowercase, subtract 32 to convert to uppercase
            copy[i] -= 32;
        }
    }    
    
    printf("Original: %s\n\n", five);
    printf("Copy: %s\n", copy);
}

// *** result *** 
// Type in a lowercase five letter word:

// Original: hello

// Copy: HELLO
