//Fa�a um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a m�dia
//das notas dos alunos e a m�dia das notas das alunas. O algoritmo dever� apresentar os
//resultados solicitados quando for fornecida uma nota negativa.

#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	int quantalunos,contadormasc=0,contadorfem=0,i,sexo;
	float mediamasc[i],mediafem[i], mediasomamasc,mediasomafem,mediafinalfem,mediafinalmasc;
	int selecaomasc,selecaofem;
	
	printf("------------------\n");
	printf("Notas de uma turma\n");
	printf("------------------\n");
	setlocale(LC_ALL,"Portuguese");
		printf("Quantas pessoas h� na turma: ");
		while(scanf("%d",&quantalunos)!=1){
			printf("Valor inv�lido!\nDigite um n�mero inteiro maior que 0!");
			if(quantalunos<0){
			printf("Digite um valor inteiro maior que 0!");
		}
		while(getchar()!='\n');
		}
		for(i=0;i<quantalunos;i++){
			printf("Escolha o sexo do(a) aluno(a)\n");
			printf("[1] Masculino\n");
			printf("[2] Feminino\n");
				scanf("%d",&sexo);
				fflush(stdin);
			switch(sexo){
				case 1: 
					printf("Digite a nota do aluno: ");
					 scanf("%f",&mediamasc[i]);
					 mediasomamasc = mediasomamasc + mediamasc[i];
					 contadormasc = contadormasc + 1;
				break;
				case 2:
				printf("Digite a nota da aluna: ");
					 scanf("%f",&mediafem[i]);
					 mediasomafem = mediasomafem + mediafem[i];
					 contadorfem = contadorfem + 1;
				break;	 
			}
}
mediafinalmasc = mediasomamasc/(contadormasc);
mediafinalfem = mediasomafem/(contadorfem);
	if(contadormasc>0 && contadorfem>0){
		printf("A m�dia geral masculina �: %.2f pontos\n",mediafinalmasc);
		printf("A m�dia geral feminina �: %.2f pontos\n",mediafinalfem);
	} else if((contadormasc>0) && (contadorfem<=0)){
		printf("A m�dia geral masculina �: %.2f pontos\n",mediafinalmasc);
		printf("N�o foram registradas m�dias do sexo feminino\n");
	}else if((contadorfem>0) && (contadormasc<=0)){
		printf("A m�dia geral feminina �: %.2f pontos\n",mediafinalfem);
		printf("N�o foram registradas m�dias do sexo masculino\n");
	}
		return 0;
}
