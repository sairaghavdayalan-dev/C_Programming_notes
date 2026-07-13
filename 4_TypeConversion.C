#include <stdio.h>

int main(){

    // 5/2 = 2 becuase its int
    int a = 5;
    printf("%d \n", a/2);

    // using float to solve it
    // here i am converting int a to float a
    printf("%f \n", (float) a / 2);


    // Types of type conversion
        // Implicit
        // Explicit 

    // Implict conversion (Auto convert int to float)
    float ex_float = 5;
    printf("%f\n", ex_float); // 5.00000

    // Explict conversion
    float sum = (float) 5 / 2;
    printf("%f \n", sum);


    return 0;
}