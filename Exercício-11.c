//Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
//piadas. Estarão concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos. A
//quantidade de juízes será definida no dia da apuração e para cada juiz o algoritmo solicitará a
//nota para cada candidato. A nota poderá variar de 0 (zero) a 100(cem). O algoritmo deverá
//apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
//vencedor após o voto de todos os juízes.

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){
	int i,numero=1,jurados,listajurado=1;
	char participante1[18],participante2[18],participante3[18];
	int nota1=0,nota2=0,nota3=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("------------------------\n");
	printf("VOTO CONCURSO PIADAS UCB\n");
	printf("------------------------\n");
			printf("Digite o nome do 1º participante: ");
				scanf("%s",participante1);
			printf("Digite o nome do 2º participante: ");
				scanf("%s",participante2);
			printf("Digite o nome do 3º participante: ");
					scanf("%s",participante3);
			printf("Quantos jurados serão responsáveis por dar a pontuação ? ");
				scanf("%d",&jurados);
		printf("O valor das notas devem ser entre 0 e 100 somente\n");
	for(i=0;i<jurados;i++){
		printf("----------------------\n");
		printf("%dº jurado            |\n",listajurado);
		printf("----------------------\n");
		printf("Nota do participante %s: ",participante1);
			scanf("%d",&nota1);
				fflush(stdin);
				while(nota1<0 || nota1>100){
						scanf("%d",&nota1);
							fflush(stdin);
		}
			printf("Nota do participante %s: ",participante2);
			scanf("%d",&nota2);
				fflush(stdin);
				while(nota2<0 || nota2>100){
					scanf("%d",&nota2);
						fflush(stdin);
		}
			printf("Nota do participante %s: ",participante3);
			scanf("%d",&nota3);
				fflush(stdin);
				while(nota3<0 || nota3>100){
			scanf("%d",&nota3);	
				fflush(stdin);	
		}
			listajurado=listajurado+1;
			system("cls");
			if(jurados>1){
				nota1 = nota1+nota1;
					nota2 = nota2+nota2;
						nota3 = nota3+nota3;
			}
	}
	printf("\n");
	printf("Nota do participante %s: %d\n",participante1,nota1);
	printf("Nota do participante %s: %d\n",participante2,nota2);
	printf("Nota do participante %s: %d\n",participante3,nota3);
	printf("------------------------------------\n");
	if(nota1>nota2 && nota1>nota3){
		printf("Vencedor do concurso: %s\nPontuação: %d",participante1,nota1);
	}else if(nota2>nota1 && nota2>nota3){
		printf("Vencedor do concurso: %s\nPontuação: %d",participante2,nota2);	
	} else if(nota3>nota1 && nota3>nota2){
		printf("Vencedor do concurso: %s\nPontuação: %d",participante3,nota3);
	}
	return 0;
}
