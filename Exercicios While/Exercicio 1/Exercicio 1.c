#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
float m1,m2,m3,s1,s2,s3;
	
 m1 = 500 * 0.01;
 s1 = 500 + m1;

 printf("\n Seu saldo no primeiro mes e: %f \n", s1);

 m2 = s1 * 0.01;
 s2 = s1 + m2;
 
 printf("\n Seu saldo no segundo mes e: %f \n", s2);
 
 m3 = s2 * 0.01;
 s3 = s2 + m2;
 
 printf("\n Seu saldo no terceiro mes e: %f \n", s3);
 
 system("PAUSE");	
	return 0;
}
