#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float Cem,Dec,Met,Mili;
	int N;
	N = 1;
	
	do {
		printf("\n %dº Medida", N);
		printf("\n Digite o numero(cm)");
			scanf("%f", &Cem);
		
			system("CLS");
		
			Dec = Cem / 10;
		
		printf("\n O numero mencionado, em decimetros e : %f \n", Dec);
		
			Met = Cem / 100;
		
		printf("\n O numero mencionado, em metros e : %f \n", Met);
		
			Mili = Cem * 10;
		
		printf("\n O numero mencionado, em milimetros e : %f \n", Mili);
		
		puts("Deseja calcular  novamente? ");
		
	    puts("1  para Sim ou 2  para Nao");
        	scanf("%d",&N);
		N = N + 1;
	} while (N <= 10);
	
	system("PAUSE");
	return 0;
}
