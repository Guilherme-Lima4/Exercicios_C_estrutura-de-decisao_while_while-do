#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float KG, MULTA, EXCESSO;
	int N;
	N = 1;
	
	do {
		printf("\n %dº Pescador", N);
		printf("\n Digite a quantidade de quilos pescada: ");
			scanf("%f", &KG);
		if (KG > 50) {
			EXCESSO = KG - 50;
			MULTA = EXCESSO * 4;
			printf("\n Pagara uma multa de: %f", MULTA);
		}
		else 
			printf("\n Nao pagara multa!");
						
			puts("\n Deseja calcular  novamente? ");
			
	    	puts("1  para Sim ou 2  para Nao");
        	scanf("%d",&N);
        N = N + 1;
	} while (N <= 5);
	
	system("PAUSE");
	return 0;
}
