# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *fptr;

    fptr = fopen("test.txt","w");

    fprintf(fptr,"hi guyss,i am raghav");
    fclose(fptr);

    return 0;
}