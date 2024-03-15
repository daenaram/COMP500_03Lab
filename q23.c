#include <stdio.h>
int main(){
    
    float first, second, third, fourth, fifth, average;
    
    printf("Please enter five real numbers:\n");
    printf("First number:\n");
    scanf("%f", &first);
    printf("Second number:\n");
    scanf("%f", &second);
    printf("Third number:\n");
    scanf("%f", &third);
    printf("Fourth number:\n");
    scanf("%f", &fourth);
    printf("Fifth number:\n\n");
    scanf("%f", &fifth);
    
    printf("The user entered:\n");
    printf("  %f then,\n", first);
    printf("  %f then,\n", second);
    printf("  %f then,\n", third);
    printf("  %f then,\n", fourth);
    printf("  %f\n\n", fifth);
    
    average = (first + second + third + fourth + fifth) / 5;
    
    printf("The average of these five numbers is: %f", average);
}

// *** result *** 
// Please enter five real numbers:
