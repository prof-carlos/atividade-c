#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main () {
	int numero=0;
	int i=0;
	int soma;
	float media;
	
	do {
		printf("Digite um número: ");
		scanf("%i",&numero);
		 i++;
		 soma = numero + i;
		 media = soma / i;
		 
	} while (numero > 0);
	
	printf("Quantidade de números: %d \n",i);
	printf("Soma dos números: %d \n",soma);
	printf("Média dos números: %.2f \n",media);
	
	return 0;
}