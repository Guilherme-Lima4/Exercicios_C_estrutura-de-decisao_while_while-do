#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{int N,R;
 N=1;
  while (N<=10) {
     R=N*5;
    printf("\n 5 X %d = %d \n", N,R);
    N=N+1;
    }
  system("PAUSE");	
  return 0;
}
