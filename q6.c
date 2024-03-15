#include <stdio.h>

int main(void) {
    
    float real_number; 
    
    printf("Enter a real number:\n");
    scanf("%f", &real_number);
    printf("Converting float input into ASCII C-String array...\n\n");
    
    char char_array[100];
    sprintf(char_array, "%f", real_number);
    
    
    for (int i = 0; char_array[i] != '\0'; i++) {
        printf("Element %d is: '%c' which is ASCII %d\n", i, char_array[i], char_array[i]);
    }
    printf("\n");
    
}

// *** RESULT *** 
// Enter a real number:
// Converting float input into ASCII C-String array...

// Element 0 is: '2' which is ASCII 50
// Element 1 is: '.' which is ASCII 46
// Element 2 is: '7' which is ASCII 55
// Element 3 is: '1' which is ASCII 49
// Element 4 is: '8' which is ASCII 56
// Element 5 is: '0' which is ASCII 48
// Element 6 is: '0' which is ASCII 48
// Element 7 is: '0' which is ASCII 48
