# include <stdio.h>

int main(){

    //Switch case
    int n = 2;
    
    switch (n){
        case 1:
            printf("one");
            break; // to go outside of switch

        case 2:
            printf("two");
            break;
            
        default: // if nothing works, default will work...
            printf("one or two only");
            break;
    }

    return 0;
}