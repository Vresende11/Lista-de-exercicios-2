//Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repeti��o
//enquanto.

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<locale.h> 


int i, numeropessoa,menoraltura;
int altura[10],finalnumeropessoa;

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
				finalnumeropessoa = finalnumeropessoa+1; 
		} 
		printf("A menor altura registrada foi da %d�\n Com %d cm de altura",finalnumeropessoa,menoraltura);
		return 0;
} 


