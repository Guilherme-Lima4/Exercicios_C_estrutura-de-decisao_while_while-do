#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int Retangulonum;
	float a,b,area;
	Retangulonum = 1;
	
	while(Retangulonum <= 10){
	
	printf ("\n Digite a base do retangulo: ");
	scanf ("%f", &b);
	printf ("\n Digite a altura do retangulo: ");
	scanf ("%f", &a);
	area = b * a;
	printf ("\n A area do seu retangulo e de: %f",area);
	
	printf("\n Digite o numero do retangulo: 2 a 10\n");
	scanf ("%d", &Retangulonum);
	
}
	return 0;

}
