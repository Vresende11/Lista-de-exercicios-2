//Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que
//seja lido um número negativo e mostrar a quantidade total de números lidos.

#include<stdio.h>
#include<locale.h>

int main(){
	int i,contagem=0;
	float numero;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("-----------------\n");
	printf("Leitor de números\n");
	printf("-----------------\n");
	   for(i=0;i<100;i++){
	   	printf("Digite um valor: ");
	   		scanf("%f",&numero);
	   		contagem = contagem  + 1;
	   		if(numero<0){
	   			printf("Foi/Foram lido(s) ao todo %d número(s)",contagem);
	   			return 0;
			   }
	   }
	   printf("Foi/Foram lido(s) ao todo %d número(s)",contagem);
	return 0;
}
