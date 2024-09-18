/*
Foi realizada uma pesquisa entre os habitantes de uma dada regi�o. Foram recolhidos os dados de idade, sexo (M/F) 
e sal�rio de 10 habitantes. Construa um Programa em C que informe:
	a m�dia de sal�rio do grupo;
	maior e menor idade do grupo;
	quantidade de mulheres com sal�rio at� 500�.
*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float idade, i, maiorIdade = 0, menorIdade = 1000, salario, somaSalario = 0, contarF = 0;
	char sexo;
	
	for(i = 1; i <= 10; i++){
		printf("\nDados do %.0f habitante\n", i);
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
	
	printf("A maior idade � %.0f\n", maiorIdade);
	printf("A menor idade � %.0f\n", menorIdade);
	printf("A media dos salarios %.2f\n", somaSalario / (i - 1));	
	printf("A quantidade de mulheres com salario inferior a 500 � %.0f\n", contarF);
	
	getchar();
	return(0);
}
