#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float not1,not2,not3,not4;
	float media,soma;
	int qtdalunos;
	
	while
	(qtdalunos <= 7){
		printf("\n Digite a nota do primeiro bimestre: ");
		scanf("%f", &not1);
		
		printf("\n Digite a nota do segundo bimestre: ");
		scanf("%f", &not2);
		
		printf("\n Digite a nota do terceiro bimestre: ");
		scanf("%f", &not3);
		
		printf("\n Digite a nota do quarto bimestre: ");
		scanf("%f", &not4);
		
		soma = not1 + not2 + not3 + not4;
		media = soma / 4;
		
		qtdalunos = qtdalunos + 1;
		
		printf("\n A media do aluno e: %f", media);
		
		printf ("\n Digite o numero do aluno: %d a 7", qtdalunos);
		scanf("%d", &qtdalunos);
		
}
	return 0;
}
