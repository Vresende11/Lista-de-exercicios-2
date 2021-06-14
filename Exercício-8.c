//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada
//produto e calcule e escreva a identificação e o novo preço após o aumento.

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
	printf("Reajuste de preços\n");
	printf("------------------\n");
	  printf("Quantos produtos irão passar pelo reajuste: ");
	  	scanf("%d",&quantidadeproduto);
	  	fflush(stdin);
	for(i=0;i<quantidadeproduto;i++){
	  printf("Digite o id do produto: ",numeroproduto);
	  fflush(stdin);
	  	fgets(idproduto,11,stdin);
	  printf("Digite o preço: ");
	  	scanf("%f",&precoproduto);
	  	fflush(stdin);
	    reajuste = (precoproduto + (precoproduto*0.1));
		numeroproduto = numeroproduto + 1;	
		printf("Com o reajuste de 10 porcento o produto está custando R$ %.2f\n",reajuste);
		printf("\n");
		if(quantidadeproduto>2){
			printf("Quer realizar o rajuste do próximo produto ? ");
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
	  		printf("O preço do último produto é de -1\n");
	  		return 0;
		  } 
}
	  return 0;
}
