//Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
//pelo usu�rio.

#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main(){ // inicio do algoritmo
	float n,h=1; // declara��o de vari�vel
	setlocale(LC_ALL,"Portuguese"); // necess�rio para o algoritmo reconhecer acentua��o
	printf("Digite um valor 'N' para caucular o valor de 'H': "); // printa mensagem em aspas na tela 
		while(scanf("%f",&n)!=1){ // abertura de estrutura de repeti��o
			printf("Valor Inv�lido\nDigite um valor inteiro maior que 0: ");
		while(getchar()!='\n');
		} // fim da estrutura de repeti��o
		h = h/n; // realiza��o do c�lculo
		printf("O valor de ' H ' � igual a: %.2f",h); // printa o resultado na tela
	return 0;	
} // fim do algoritmo
