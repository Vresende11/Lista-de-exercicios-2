//Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A,
//baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>

int numero,resultado=1,i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("---------------------\n");
	printf("Fatorial de um N�mero\n");
	printf("---------------------\n");
		printf("Informe o valor para calcular o fatorial: ");
		if(scanf("%d",&numero)!=1){
			printf("N�o existe fatorial de string");
		} else 
		for(i=numero; i>1; i--){
			resultado = resultado*i;
			system("cls");
				printf("O fatorial de %d � igual a: %d",numero,resultado);
		}
		return 0;
}


