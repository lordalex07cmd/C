/*
Foi realizada uma pesquisa entre os habitantes de uma dada região. Foram recolhidos os dados de idade, sexo (M/F) 
e salário de 10 habitantes. Construa um Programa em C que informe:
	a média de salário do grupo;
	maior e menor idade do grupo;
	quantidade de mulheres com salário até 500€.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float idade, idade1, i, maiorIdade, menorIdade, salario, salario1, somaSalario = 0, contarF = 0;
	char sexo, sexo1;
	
	printf("\nDados do 1 habitante\n");
	printf("Coloca a tua idade: ");
	scanf("%f", &idade1);
	printf("Coloca o sexo: ");
	scanf("%s", &sexo1);
	printf("Coloca o teu salario: ");
	scanf("%f", &salario1);
	
	maiorIdade = menorIdade = idade1;
	
	for(i = 1; i < 10; i++){
		printf("\nDados do %.0f habitante\n", i+1);
		printf("Coloca a tua idade: ");
		scanf("%f", &idade);
		printf("Coloca o sexo: ");
		scanf("%s", &sexo);
		printf("Coloca o teu salario: ");
		scanf("%f", &salario);
				
		somaSalario = somaSalario + salario;
		
		if(idade > maiorIdade){
			maiorIdade = idade;
		}
		
		if(idade < menorIdade){
			menorIdade = idade;
		}
		
		if(sexo == 'f' && salario <= 500){
			contarF++;
		}
		
	}
	
	printf("A maior idade é %.0f\n", maiorIdade);
	printf("A menor idade é %.0f\n", menorIdade);
	printf("A media dos salarios %.2f\n", (somaSalario + salario1) / i);
	
	if(sexo1 == 'f' && salario1 <= 500){
		printf("A quantidade de mulheres com salario inferior a 500 é %.0f\n", contarF + 1);
	}
	else{
		printf("A quantidade de mulheres com salario inferior a 500 é %.0f\n", contarF);
	}	
	
	
	getchar();
	return(0);
}
