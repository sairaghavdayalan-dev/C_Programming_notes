#include <stdio.h>

int main(){

    // 1. Datatypes

    // Data Types           size                    Format specifiers
    // 1. int              2 or 4 bytes                 %d or %i
    // 2. float            4 bytes                      %f or %F
    // 3. double           8 bytes                      %lf
    // 4. char             1 byte                       %c
    
    
    // Example

    char grade = 'A';
    printf("%c \n", grade);

    //ASSCI to Character
    int x = 67;
    printf("%c \n", 81);
    printf("%c \n", x-1);
    printf("%c \n", x-2);


    
    // 2. list of char is string
    char name[] = "Dhanasekaren"; // note that for string we use double quotes
    
    // 3. Memory Size
    printf("%zu \n", sizeof(name)); 

    return  0;
}