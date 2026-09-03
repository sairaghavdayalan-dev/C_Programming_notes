# include <stdio.h>
# include <string.h>

int sum(int x , int y){
    return(x +y);
}

int min(int x ,int y){
    return(x-y);
}

int div(int x , int y){
    return(x/y);
}

int mul(int x ,int y){
    return(x*y);
}

void main(){
    int x;
    int y;
    char oper;

scanf("%c",&oper);
scanf("%d",&x);
scanf("%d",&y);
// printf("%d",x+y);
if(strcmp(oper, "+") == 0){
    printf("%d",sum(x,y));
}
}

// # include <stdio.h>

// int sum(int x , int y){
//     return(x *y);
// }

// void main(){
//     int x;
//     int y;

// scanf("%d",&x);
// scanf("%d",&y);
// printf("%d",x*y);
// }

// # include <stdio.h>

// int (int x , int y){
//     return(x/y);
// }

// void main(){
//     int x;
//     int y;

// scanf("%d",&x);
// scanf("%d",&y);
// printf("%d",x/y);
// }

