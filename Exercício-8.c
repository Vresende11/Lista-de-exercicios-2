//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes
//algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada
//produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento.

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	char resposta1[3],resposta2[3];
	int i=0,numeroproduto=1,quantidadeproduto;
	char idproduto[11];
	float reajuste,precoproduto;
	
	setlocale(LC_ALL,"Portuguese");
	while(strcmp(resposta2,"sim")!=1){
		system("cls");
	printf("------------------\n");
	printf("Reajuste de pre�os\n");
	printf("------------------\n");
	  printf("Quantos produtos ir�o passar pelo reajuste: ");
	  	scanf("%d",&quantidadeproduto);
	  	fflush(stdin);
	for(i=0;i<quantidadeproduto;i++){
	  printf("Digite o id do produto: ",numeroproduto);
	  fflush(stdin);
	  	fgets(idproduto,11,stdin);
	  printf("Digite o pre�o: ");
	  	scanf("%f",&precoproduto);
	  	fflush(stdin);
	    reajuste = (precoproduto + (precoproduto*0.1));
		numeroproduto = numeroproduto + 1;	
		printf("Com o reajuste de 10 porcento o produto est� custando R$ %.2f\n",reajuste);
		printf("\n");
		if(quantidadeproduto>2){
			printf("Quer realizar o rajuste do pr�ximo produto ? ");
			 scanf("%s",&resposta1);
			 printf("\n");
			 if(stricmp(resposta1,"sim")!=0){
			 	printf("Fim do reajuste!");
			 	return 0;
			 }
		}
		}

		printf("\n");
	  printf("Deseja recalcular mais algum produto ? ");
	  	scanf("%s",&resposta2);
	  	fflush(stdin);
	  	if(strcmp(resposta2,"sim")!=0){
	  		printf("O pre�o do �ltimo produto � de -1\n");
	  		return 0;
		  } 
}
	  return 0;
}
