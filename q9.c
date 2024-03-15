#include <stdio.h>

int main(void) {
    
    int whole_number; 
    
    printf("Enter a whole number (eight digits or less):\n");
    scanf("%d", &whole_number);
    printf("Converting int input into ASCII C-String array...\n\n");
    
    char char_array[100];
    sprintf(char_array, "%08d", whole_number);
    
    
    for (int i = 0; char_array[i] != '\0'; i++) {
        printf("Element %d is: '%c' which is ASCII %d\n", i, char_array[i], char_array[i]);
    }
    printf("\n");
    
}

// *** RESULT *** 
// Enter a whole number (eight digits or less):
// Converting int input into ASCII C-String array...

// Element 0 is: '9' which is ASCII 57
// Element 1 is: '8' which is ASCII 56
// Element 2 is: '4' which is ASCII 52
// Element 3 is: '6' which is ASCII 54
// Element 4 is: '3' which is ASCII 51
// Element 5 is: '5' which is ASCII 53
// Element 6 is: '2' which is ASCII 50
// Element 7 is: '7' which is ASCII 55
