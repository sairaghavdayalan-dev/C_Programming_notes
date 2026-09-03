# include <stdio.h>

int main(){

    int num = 10;

    // & -> which is used to access memory
    // (datatype)* -> store the address of var
    // in datatype use the datatype we are going to store the memory of

    int* pointer = &num;

    printf("%d \n", num);

    printf("%p \n", &num);
    
    printf("%p \n", pointer);

    // ptr to value

    printf("%d \n", *pointer);

    return 0;
} 