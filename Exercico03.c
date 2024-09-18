/*
Construa um Programa em C para calcular o sal�rio l�quido dos funcion�rios de uma empresa com 10 funcion�rios. 
Deve-se ler o seu sal�rio bruto e apresentar o sal�rio l�quido calculado que � igual 
ao sal�rio bruto menos os descontos de IRS e Seguran�a Social. 
	At� 3000,00  
		8% 
		15%
	De 3000,01 at� 4500,00
		9%
		20%
	Acima de 4500,01
		10%
		25%
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioBruto, salarioLiquido;
	int i;
	
	for(i = 1; i <= 10; i++){
		printf("Coloca o salario bruto do %i funcionario: ", i);
		scanf("%f", &salarioBruto);
		
		if(salarioBruto <= 3000){
			salarioLiquido = salarioBruto * 0.77;
		}
		else if(salarioBruto <= 4500){
			salarioLiquido = salarioBruto * 0.71;
		}
		else{
			salarioLiquido = salarioBruto * 0.65;
		}
		
		printf("O salario Bruto � %.2f\n", salarioBruto);
		printf("O salario Liquido � %.2f\n", salarioLiquido);	
	}
	
	getchar();
	return(0);
}
