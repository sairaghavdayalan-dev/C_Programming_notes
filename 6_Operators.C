#include <stdio.h>

int main(){

    // 1. Arithmetic
    int x = 2;
    int y = 1;

    printf("%d \n", x + y);
    printf("%d \n", x - y);
    printf("%d \n", x * y);
    printf("%d \n", x / y);
    printf("%d \n", x % y);

    printf("%d \n", x++); //post increement
    printf("%d \n", x--); //post decreement 
    printf("%d \n", ++x); //pre increement
    printf("%d \n", --x); //pre decreement 

    // 2. Assignment
    // = (equal sign)
    int a = 10;

    a += 1;
    a -= 1;
    a *= 2;
    a /= 2;
    a %= 10;
    a &= 3;
    a |= 3;
    a ^= 3;
    a >>= 3;
    a <<= 3;

    // 3. Comparison
    x = 5;
    y = 10;

    printf("%d \n", x == y);
    printf("%d \n", x != y);
    printf("%d \n", x < y);
    printf("%d \n", x > y);
    printf("%d \n", x <= y);
    printf("%d \n", x >= y);

    // 4. Logical
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin); // and
    printf("Has access: %d\n", isLoggedIn || isAdmin); // or
    printf("Not logged in: %d\n", !isLoggedIn); // not

    // 5. Precedence (order of operations rules)
    int r1 = 6 * 3 + 4;     // 18 + 4 = 22
    int r2 = 6 * (3 + 4);   // 6 * 7 = 42

    printf("%d\n", r1);
    printf("%d\n", r2);

    // () - Parentheses
    // *, /, % - Multiplication, Division, Modulus
    // +, - - Addition, Subtraction
    // >, <, >=, <= - Comparison
    // ==, != - Equality
    // && - Logical AND
    // || - Logical OR
    // = - Assignment


    return 0;
}