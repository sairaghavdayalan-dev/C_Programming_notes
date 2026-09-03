// User - Defined Functions (four categories)
// 1. Function without parameters and without Return Type
// 2. Function with parameters and without Return Type
// 3. Function without parameters and with Return Type
// 4. Function with parameters and with Return Type

// 1. Function without parameters and without Return Type
// #include<stdio.h>

// void greet(){
//     printf(#"Welcome");
// }

// int main(){
//     greet();
//     return 0;
// }



// 2. Function with parameters and without Return Type:

// # include <stdio.h>
// void display_sum(int a, int b){
//     printf("%d",a+b);
// }

// int main(){
//     display_sum(10, 20);
//     return 0;
// }

// 3.Function without parameters and with Return Type:

// # include <stdio.h>
// int sai(){
//     return 5;
// }

// int main(){
//     int value;
//     value = sai();   // Function calling

//     printf("The output is %d",value);

//     return 0;  
// }

// 4. Function with parameters and with Return Type:

//  # include <stdio.h>
// int sai(int a, int b){
//     return a + b;
// }

// int main(){
//     int hello;
//     hello = sai(32,21);   // hello = 53;
//     printf("%d",hello);   
//     return 0;
// }

//  #include <stdio.h>

// int main(){
//     int n ;
//     printf("n = :");
//     scanf("%d",&n);
//     if(n % 2==0){
//     printf("n is even");
//     }

//     else{
//     printf("n  is odd");
//     }

//     return 0;

// // }

#include <stdio.h>


void find(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is an Even number", n);
    }
    else
    {
        printf("%d is an Odd number", n);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    find(n);

    return 0;
}


