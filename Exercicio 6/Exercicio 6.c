#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int pedido, N;
	
	do {
		printf("\n Digite o numero do pedido : \n 1- BigMac \n 2- Quarteirao \n 3- MacChicken \n 4- Cheddar MacMelt \n 5- MacMax \n ");
			scanf("%d", &pedido);
	
	switch(pedido) {
		case 1: 
		printf("\n Pedido escolhido : BigMac");
		break;
		
		case 2: 
		printf("\n Pedido escolhido : Quarteirao");
		break;
		
		case 3: 
		printf("\n Pedido escolhido : MacChicken");
		break;
		
		case 4: 
		printf("\n Pedido escolhido : Cheddar MacMelt");
		break;
		
		case 5: 
		printf("\n Pedido escolhido : MacMax");
		break;
	} 
		
		puts("\n Deseja pedir  novamente? ");
		
	    puts("1  para Sim ou 2  para Nao");
        	scanf("%d",&N);
	} while (N == 1);
        		
			
	system("PAUSE");
	return 0;
}
