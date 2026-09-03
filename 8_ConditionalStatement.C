# include <stdio.h>
# include <string.h> // To use string compare

int main(){

    /*
    if (condition){
        statement 1;
        statement n;
    }
    else if (condition){
        statement 1;
        statement n;
    }
    else{
        statement 1;
        statement n;
    }
    */


    // simple 
    int x = 20;
    int y = 30;

    if (x > y){
        printf("x is greater"); 
    }

    else if (x == y){
        printf("both have same value");
    }

    else{
        printf("y is greater");
    }


    // Short hand if (Ternary Operator)

    // Syntax
    // var = (condition) ? expressionTrue : expressionFalse;

    // Example
    int z = (x >= y) ? x : y;

    printf("\n%d\n", z);

    // Example 2
    char gender[] = "male";

    (strcmp(gender, "male") == 0) ? printf("Good morning sir") : printf("good morning mam");

    // Nested if
    int age = 20;

    if (strcmp(gender, "male") == 0){
        if (age >= 18){
            printf("\nhe is adult");
        }
    }

    //logical operator
    // &&(and) ||(or) !(not)    

    return 0;
}