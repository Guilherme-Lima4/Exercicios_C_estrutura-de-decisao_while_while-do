#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int N, ANOAT, NASC, IDADE;
	N = 1;
	
	do {
		printf("\n %dº Pessoa", N);
		printf("\n Digite o ano de seu nascimento: ");
			scanf("%d", &NASC);
		printf("\n Digite o ano atual :");
			scanf("%d", &ANOAT);
			IDADE = ANOAT - NASC;
		if (IDADE >= 18) {
			printf("\n Voce antingiu a maioridade!");
		}
		else 
			printf("\n Voce e menor de idade!");
			
			puts("Deseja calcular  novamente? ");
		
	    	puts("1  para Sim ou 2  para Nao");
        	scanf("%d",&N);
		
		
		
		
		N = N + 1;
	} while (N <= 15);
		
	system("PAUSE");				
	return 0;
}
