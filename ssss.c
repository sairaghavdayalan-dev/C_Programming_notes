# include <stdio.h>

struct details{

    int n ;
    int x ;
    

};

int main(){
    struct details me ={(35,18)};

    if(me.n > me.x){
        printf("%d","n is greater than x");

    }

    else{
        printf("x is greater");
    
    }  
    
    return 0;

}

