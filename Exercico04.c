/*
Crie um programa em C que leia vários números inteiros e informe para cada número lido se ele é positivo ou 
negativo. O fim da leitura será indicado pelo número 0.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	do{
		printf("Coloca um número: ");
		scanf("%d", &numero);
		
		if(numero > 0){
			printf("O numero é positivo\n");
		}
		else if(numero < 0){
			printf("O numero é negativo\n");
		}
		else{
			printf("Terminado o programa\n");
		}
		
	}while(numero != 0);
	
	getchar();
	return(0);
}
