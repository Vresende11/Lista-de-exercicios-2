//Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que
//seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.

#include<stdio.h>
#include<locale.h>

int main(){
	int i,contagem=0;
	float numero;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("-----------------\n");
	printf("Leitor de n�meros\n");
	printf("-----------------\n");
	   for(i=0;i<100;i++){
	   	printf("Digite um valor: ");
	   		scanf("%f",&numero);
	   		contagem = contagem  + 1;
	   		if(numero<0){
	   			printf("Foi/Foram lido(s) ao todo %d n�mero(s)",contagem);
	   			return 0;
			   }
	   }
	   printf("Foi/Foram lido(s) ao todo %d n�mero(s)",contagem);
	return 0;
}
