#include <stdio.h>
#include <math.h>
int main(){
    
    int opposite_length, adjacent;
     float hypotenuse;
    
    printf("What is the length of the opposite side?\n");
    scanf("%d", &opposite_length);
    printf("What is the length of the adjacent side?\n");
    scanf("%d", &adjacent);
    
    hypotenuse = sqrt(opposite_length * opposite_length + adjacent * adjacent);
    printf("The length of the hypotenuse is: %f\n", hypotenuse);
}

// *** RESULT *** 
// What is the length of the opposite side?
// What is the length of the adjacent side?
// The length of the hypotenuse is: 5.000000
