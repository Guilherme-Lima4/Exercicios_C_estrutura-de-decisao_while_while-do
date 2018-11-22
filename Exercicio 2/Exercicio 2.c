#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float Ba,H,Ar,Result;
	int N;
	N = 1;
	
	do {
		
		printf("\n %dº Triangulo :", N);
		printf("\n Digite a base do triangulo : ");
			scanf("%f", &Ba);
		
			system("CLS");
		
		printf("\n Digite a altura do triangulo : ");
			scanf("%f", &H);
		
			system("CLS");
		
			Ar = Ba * H;
			Result = Ar / 2;
		
		printf("\n A area do Triangulo e : %f \n ", Result);
		
		puts("Deseja calcular novamente? ");
	    
		puts("1  para Sim ou 2  para Nao");
            scanf("%d",&N);
        N = N + 1;    
	} while (N <= 8);
		
	system("PAUSE");
	return 0;
}
