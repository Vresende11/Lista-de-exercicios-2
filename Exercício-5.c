//Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N �
//fornecido pelo usu�rio. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...fa�a.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int i, numeropessoa,menoraltura;
int altura[10];
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("--------------------\n");
	printf("Analisador de altura\n");
	printf("--------------------\n");
	numeropessoa=1;
		for(i=0;i<10;i++){
			printf("Digite a altura da %d� pessoa em cent�metros: ",numeropessoa);
			scanf("%d",&altura[i]);
			fflush(stdin);
			numeropessoa = numeropessoa+1;
		}
		menoraltura = altura[0];
		for(i=0;i<10;i++){
			if(altura[i]<menoraltura)
			menoraltura = altura[i];
				numeropessoa = numeropessoa+1;
		}
		printf("A menor altura registrada foi da %d�\n Com %d cm de altura",numeropessoa,menoraltura);
		return 0;
}


