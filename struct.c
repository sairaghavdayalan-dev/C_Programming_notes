// # include <stdio.h>

// struct details{

//     int n ;
//     int x ;
    

// };

// int main(){
//     struct details me ={18,18};

//     printf("%d",me.n + me.x);
    

//     return 0;

// }


#include <stdio.h>

typedef float Temperature;

int main() {
  Temperature today = 25.5;
  Temperature tomorrow = 18.6;

  printf("Today: %f C\n", today);
  printf("Tomorrow: %f C\n", tomorrow);

  return 0;
}
