#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float Dep,Sl,Vb,Vh,Htm;
	int N;
	N = 1;
	
	
	do {
		
		printf("\n %dº Funcionario", N);
		printf("\n Digite o numero de dependentes : ");
			scanf("%f", &Dep);
		
			system("CLS");
		
		printf("\n Digite o valor recebido por hora : ");
			scanf("%f", &Vh);
		
			system("CLS");
		
		printf("\n Digite as horas trabalhadas por mes : ");
			scanf("%f", &Htm);
		
			system("CLS");
		
			Vb = Vh * Htm;
		
		printf("\n Seu valor bruto e : %f \n ", Vb);
		
			Sl = Dep * 300 + Vb;
		
		printf("\n O valor de seu salario liquido e : %f \n ", Sl);
		
		puts("Deseja calcular  novamente? ");
		
	    puts("1  para Sim ou 2  para Nao");
        	scanf("%d",&N);
        N = N + 1;	

	} while (N <= 10);
				
		system("PAUSE");
		return 0;	
}

