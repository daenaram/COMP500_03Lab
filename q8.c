#include <stdio.h>

int main(){
    
    int array1;
    int array2; 
    int array3;
    
    printf("First Array Setup...\n\n");
    printf("  Please enter the 1st value:\n");
    scanf("%d", &array1);
    printf("  Please enter the 2nd value:\n");
    scanf("%d", &array2);
    printf("  Please enter the 3rd value:\n\n");
    scanf("%d", &array3);
    printf("First array is: { %d, %d, %d }\n\n", array1, array2, array3);

    int array4;
    int array5; 
    int array6;
  
    printf("Second Array Setup...\n");
    printf("  Please enter the 1st value:\n");
    scanf("%d", &array4);
    printf("  Please enter the 2nd value:\n");
    scanf("%d", &array5);
    printf("  Please enter the 3rd value:\n\n");
    scanf("%d", &array6);
    printf("Second array is: { %d, %d, %d }\n\n", array4, array5, array6);
    printf("  C..a..l..c..u..l..a..t..i..n..g..\n\n");
    printf("Adding corresponding elements: { %d, %d, %d }\n\n", array1 + array4, array2 + array5, array3 + array6);
    printf("Subtracting corresponding elements: { %d, %d, %d }\n\n", array1 - array4, array2 - array5, array3 - array6);
    printf("Multiplying corresponding elements: { %d, %d, %d }\n", array1 * array4, array2 * array5, array3 * array6);
}

// *** RESULT ***
//First Array Setup...

//  Please enter the 1st value:
//  Please enter the 2nd value:
//  Please enter the 3rd value:

//First array is: { 6, 5, 1 }

//Second Array Setup...
//  Please enter the 1st value:
//  Please enter the 2nd value:
//  Please enter the 3rd value:

//Second array is: { 4, 1, 8 }

//  C..a..l..c..u..l..a..t..i..n..g..

//Adding corresponding elements: { 10, 6, 9 }

//Subtracting corresponding elements: { 2, 4, -7 }

//Multiplying corresponding elements: { 24, 5, 8 }
