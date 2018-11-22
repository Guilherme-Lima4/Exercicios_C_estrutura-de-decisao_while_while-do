#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int AN, AA, IDA, ID2050;
	int Resp;
	
	AA = 2018;
	
	do {
		printf("Digite o ano em que voce nasceu :");
             scanf("%d",&AN);
             IDA = AA-AN;
             ID2050 = 2050-AN;
             printf("Sua idade atual e %d\n", IDA);
             printf("Sua idade em 2050 sera %d\n", ID2050);
             puts("Deseja calcular  novamente? ");
	       	 puts("1  para Sim ou 2  para Não");
             scanf("%d",&Resp);
    } while (Resp ==1);

	system("PAUSE");
	return 0;
}
