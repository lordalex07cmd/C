/*
Crie um programa em C que leia v�rios n�meros inteiros e informe para cada n�mero lido se ele � positivo ou 
negativo. O fim da leitura ser� indicado pelo n�mero 0.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero = 1;
	
	while(numero != 0){
		printf("Coloca um n�mero: ");
		scanf("%d", &numero);
		
		if(numero > 0){
			printf("O numero � positivo\n");
		}
		else if(numero < 0){
			printf("O numero � negativo\n");
		}
		else{
			printf("Terminado o programa\n");
		}
		
	}
	
	getchar();
	return(0);
}
