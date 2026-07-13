#include <stdio.h>

int main() {

    // 1. Variables

    // Syntax
    // type var_name = value;

    // Example with types
    int int_name = 1;

    char char_name = 'a'; // for char use single quotes

    float float_name = 2.3;

    //______________________________________________________________________________

    // 2. how to use variable in  printf

    // this below program will cause error
    // printf(int_name);

    // Format Specifiers
    // Used as a place holder that tells printf what kind of value we are going to use

    // Example
    printf("%d \n", int_name); 
    printf("%f \n", float_name);
    printf("%c \n", char_name);


    // Example 2
    char name[] = "Dhanasekaren"; // list of chars == string
    int age = 21;
    printf("Hello I am %s. My age is %d.\n", name, age);

    //______________________________________________________________________________


    // 3. Var exchange
    int num = 21;

    num = 22;

    printf("%d \n", num);

    int num2 = 25;

    num2 = num;

    printf("%d \n", num2);

    return 0;


}
