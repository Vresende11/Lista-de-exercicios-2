//Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
//pelo usuário.

#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main(){ // inicio do algoritmo
	float n,h=1; // declaração de variável
	setlocale(LC_ALL,"Portuguese"); // necessário para o algoritmo reconhecer acentuação
	printf("Digite um valor 'N' para caucular o valor de 'H': "); // printa mensagem em aspas na tela 
		while(scanf("%f",&n)!=1){ // abertura de estrutura de repetição
			printf("Valor Inválido\nDigite um valor inteiro maior que 0: ");
		while(getchar()!='\n');
		} // fim da estrutura de repetição
		h = h/n; // realização do cálculo
		printf("O valor de ' H ' é igual a: %.2f",h); // printa o resultado na tela
	return 0;	
} // fim do algoritmo
