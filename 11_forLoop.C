# include <stdio.h>

int main(){

    // For Loop
    // Syntax

    /*
    for (declare; condition; increment/decrement){
        statement 1
        :
        statment n
    }
    */

    // Forward
    for(int i = 0; i < 5; i++){
        printf("%d ", i);
    }

    printf("\n");

    // Reverse
    for(int i = 10; i > 0; i--){
        printf("%d ", i);
    }

    printf("\n");

    //_____________________________________________________________________________________
    // Nested Loops

    //Outer loop
    for (int i = 0; i < 9; i++){
        
        // inner loop
        for (int j = 0; j < 2; j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}