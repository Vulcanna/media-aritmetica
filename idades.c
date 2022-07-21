#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int quantidade;
	float soma = 0;
	float media;
	int contador;
	
	
	printf("Média aritmetica de idades\n\n\n ");
	printf("Digite a quantidade de pessoas: ");
	scanf("%i",&quantidade);
	float idades[quantidade];	

	for(contador = 0 ; contador < quantidade ; contador++ ){
		printf("\nDigite a %iª idade: ",contador+1);
		scanf("%f",&idades[contador]);	
	}	
	for(contador = 0; contador < quantidade ; contador++ ){
		printf("\nidades[%i]: %f",contador,idades[contador]);
		soma = soma + idades[contador];
	}	
	media =  soma / quantidade;
	printf("\nA média é: %.2f\n\n", media);	
	system("pause");
	return 0;	
}
