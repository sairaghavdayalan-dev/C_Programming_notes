# include <stdio.h>

int main(){ 
    int n = 5;
    int x;
    for (int i = 0; i < 3; i++){
    printf("enter ur number:");
    scanf("%d", &x);

    if(n == x){
    printf("ur guess is correct:)\n");
    break;
    }

    else if (n != x)
        printf("ur guess is wrong\n");
}


return 0;

}

