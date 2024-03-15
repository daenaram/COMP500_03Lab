#include <stdio.h>

int main() {
    char uppercase;
    int position;
    
    printf("Alphabet Facts!\n");
    printf("^^^^^^^^^^^^^^^\n\n");

    printf("Please input an uppercase letter:\n");
    scanf("%c", &uppercase);
    
    printf("Some interesting facts:\n\n");

    char lowercase = uppercase + 32;

    position = uppercase - 'A' + 1;

    printf("  1) The lowercase version of the letter is '%c'.\n\n", lowercase);
    printf("  2) The letter '%c' comes before '%c' in the alphabet.\n\n", uppercase - 1, uppercase);
    printf("  3) The letter '%c' comes after '%c' in the alphabet.\n\n", uppercase + 1, uppercase);
    printf("  4) %c is letter number %d in the alphabet!\n", uppercase, position);

    return 0;
}

// *** result *** 
// Alphabet Facts!
