#include <stdio.h>

void do_while(int n){
    int i = 0;

    do{
        printf("%d ", i);
        i++;
    }while(i < n);
}

int main(){

    // while loop
    // Syntax
    /*
    while (condition){
        statement 1
        :
        statement n
    }
    */

    int x = 0;

    // X goes from 0 to 10
    while (x < 10){
        printf("%d ", x);
        x++;
    }
 
    printf("\n");
    // now x is 10
    // reverse it

    while (x > 0){
        printf("%d ", x);
        x--;
    }

    printf("\n");

    // increment by 2
    while (x < 10){
        printf("%d ", x);
        x += 2;
    }

    printf("\n");
    //____________________________________________________________________

    // Do while
    // Syntax
    /*
    do{
        statement 1
        :
        statement n
    }while (condition);
    */
   
    int i = 500;
    // do{
    //     printf("%d ", i);
    //     i--;
    //     if(i == -1000){
    //         break;
    //     }
    // }while(1);
        
    // printf("\n\n\n");

    // i = 1;

    do{
        printf("%d ", i);
        i--;
    }while(i < 100);
    

    // do_while(100);

    return 0;
}