/*
Faça um Programa em C que lê um valor N inteiro e positivo e que calcula e escreve o fatorial de 
N (N!). N! = 1 x 2 x 3 x 4 x ... x N
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, fatorial, numeroaux;
	
	printf("Coloca o numero positivo: ");
	scanf("%i", &numero);
	
	if(numero >= 0){
		fatorial = 1;
		numeroaux = numero;
		
		while(numero > 0){
			fatorial = fatorial * numero;
			numero--;
		}	
		
		//printf("\nO Fatorial é %i", fatorial);
		printf("\nO Fatorial de %i é %i", numeroaux, fatorial);
	}
	else{
		printf("O valor colocar tem que ser positivo\n");
	}
	
	
	getchar();
	return(0);
}
