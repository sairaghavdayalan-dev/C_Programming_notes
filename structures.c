/*
 * ============================================================================
 * CONCEPT: Structures (struct)
 * ============================================================================
 *
 * 1. THE PROBLEM:
 *    Representing one student requires three distinct variables:
 *      - name          (text / char array)
 *      - mobile_number (numeric / string)
 *      - address       (text / char array)
 *
 *    As the student count grows, creating individual variable sets for each
 *    student quickly becomes repetitive, disorganized, and error-prone.
 *
 * 2. THE SOLUTION:
 *    A `struct` is a user-defined composite data type that bundles related
 *    variables of differing types together under a single, cohesive entity.
 *
 * 3. KEY TERMINOLOGY:
 *    - Members (or Fields): The individual variables declared inside the struct
 *      (e.g., `name`, `mobile_number`, `address`).
 *    - Instance (or Variable): A specific record created from the struct blueprint
 *      (e.g., `struct Student student1;`).
 * ============================================================================
 */

# include <stdio.h>

struct mystruct {
    char name[30];

    char mobile_number;

    char address[50];
};


int main(){

    struct mystruct s1 = {"Dhanasekaren","8438374233", "Chennai"};
    
    printf("%s %s %s", s1.name, s1.mobile_number,s1.address);

    return 0;
}