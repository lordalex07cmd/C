/*
Construa um Programa em C para calcular o salário líquido dos funcionários de uma empresa com 10 funcionários. 
Deve-se ler o seu salário bruto e apresentar o salário líquido calculado que é igual 
ao salário bruto menos os descontos de IRS e Segurança Social. 
	Até 3000,00  
		8% 
		15%
	De 3000,01 até 4500,00
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
		
		printf("O salario Bruto é %.2f\n", salarioBruto);
		printf("O salario Liquido é %.2f\n", salarioLiquido);	
	}
	
	getchar();
	return(0);
}
