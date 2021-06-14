//Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade
//de frutas para cada tipo

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int maca=0,abacaxi=0,pera=0,i=0,opcao;
	char quantidade;
	setlocale(LC_ALL,"Portuguese");
	
	printf("-----------\n");
	printf(" FEIRA UCB \n");
	printf("-----------\n");
		printf("Quantas frutas deseja comprar: ");
		scanf("%d",&quantidade);
			fflush(stdin);
		if(quantidade<=0){
			fflush(stdin);
			printf("Obrigado! E volte sempre!\n");
			return 0;
		} 
			
	do{
		
	 printf("Qual fruta deseja comprar\n");
	 printf("[1] Abacaxi\n");
	 printf("[2] Maça\n");
	 printf("[3] Pera\n");
	 printf("Escreva a fruta desejada: ");
	  scanf("%d",&opcao);
	  fflush(stdin);
    if(opcao<=0 || opcao>3){
	   		while(opcao<=0 || opcao>3){
		   	printf("Fruta não encontrada!\nDigite 1 para escolher Abacaxi\n2 para escolher Maça\nE 3 para escolher Pera\n");
	   	 	scanf("%d",&opcao);
	   	 	fflush(stdin);
	   	 }
	   }
	  switch(opcao){
	  	
	  	case 1:
	  		abacaxi = abacaxi + 1;
	  		break;
		case 2:
			maca = maca + 1;
			break;
			
		case 3:
			pera = pera + 1;
			break;
			
	  }
	  i = i+1;
	
} while(i<quantidade);
printf("\n");
printf("Obrigador por escolher a FEIRA UCB!\n");
printf("Você comprou: %d abacaxi(s)\n%d maça(s)\n%d pera(s)",abacaxi,maca,pera);
	  return 0;
}
