

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	int i,quantidadepessoas,opcao,idade,masculino,maioridade;
	int corolhos,corcabelo,feminino,femininoespecifico;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("------------------------\n");
	printf("Analisador de habitantes\n");
	printf("------------------------\n");
		printf("Quantos habitantes foram analizados: ");
		while(scanf("%d",&quantidadepessoas)!=1){
			printf("Digite um valor inteiro: ");
			while(getchar()!='\n');
		}
		system("cls");
	for(i=0;i<quantidadepessoas;i++){
		printf("Escolha de sexo\n");
		printf("[1] Masculino\n");
		printf("[2] Feminino\n");
		printf("Escolha uma das opções: ");
		while(scanf("%d",&opcao)!=1){
			 	while(opcao<1 || opcao>2){
			 		printf("Digite a penas valores inteiros\n");
					printf("1 - Masculino\n2 - Feminino\n");
						fflush(stdin);
			 		scanf("%d",&opcao);
			 }
			 while(getchar()!='\n');
		}
		switch(opcao){
				fflush(stdin);
			case 1: 
				masculino = masculino +1;
				printf("Cor dos Olhos\n");
				printf("[1] Azuis\n");
				printf("[2] Verders\n");
				printf("[3] Castanhos\n");
				printf("[4] Pretos\n");
				printf("Escolha a cor: ");
					while(scanf("%d",&corolhos)!=1){
						while(corolhos<1 || corolhos>4){
							fflush(stdin);
							scanf("%d",&corolhos);
						}
					}
				printf("Cor dos cabelos\n");
				printf("[1] Loiros\n");
				printf("[2] Pretos\n");
				printf("[3] Castanhos\n");
				printf("Esolha a cor: ");
					while(scanf("%d",&corcabelo)!=1){
						while(corcabelo<1 || corcabelo>4){
							fflush(stdin);
							scanf("%d",&corcabelo);
						}
					}
				printf("Digite a idade do parcipante: ");
					while(scanf("%d",&idade)!=1){
						printf("Digite apenas valores inteiros!");
						while(getchar()!='\n');
					}
			break;
			case 2:
				feminino = feminino +1;
				printf("Cor dos Olhos\n");
				printf("[1] Azuis\n");
				printf("[2] Verdes\n");
				printf("[3] Castanhos\n");
				printf("[4] Pretos\n");
				printf("Esolha a cor: ");
						while(scanf("%d",&corolhos)!=1){
						while(corolhos<1 || corolhos>4){
							fflush(stdin);
							scanf("%d",&corolhos);
						}
					}
				printf("Cor dos cabelos\n");
				printf("[1] Loiros\n");
				printf("[2] Pretos\n");
				printf("[3] Castanhos\n");
				printf("Esolha a cor: ");
					while(scanf("%d",&corcabelo)!=1){
						while(corcabelo<1 || corcabelo>4){
							fflush(stdin);
							scanf("%d",&corcabelo);
						}
					}
				printf("Digite a idade do parcipante: ");
					while(scanf("%d",&idade)!=1){
						printf("Digite apenas valores inteiros!");
						while(getchar()!='\n');
					}
				if(idade>=18 && idade<=35 && corolhos==2 && corcabelo==1){
					femininoespecifico = femininoespecifico +1;
				}
			break;	
			maioridade = idade;
			if(idade>maioridade){
				maioridade = idade;
			}	
		} 
	}
	printf("Maior idade registrada %d anos",maioridade);
	printf("Quantidade de mulheres com mais de 18 anos e menor de 35 anos\ncom cabelos loiros e olhos castanhos: %d",femininoespecifico);
	return 0;
}
