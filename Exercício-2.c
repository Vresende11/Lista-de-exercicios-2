//Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo
//outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)

#include<stdio.h>
#include<locale.h>

int main(){
	int numero1,numero2,resultado,i;
	setlocale(LC_ALL,"Portuguese");
	printf("-------------\n");
	printf("Multiplica��o\n");
	printf("-------------\n");
		printf("Digite o primeiro valor: ");
			scanf("%d",&numero1);
		printf("Digite o segundo valor: ");
		    scanf("%d",&numero2);
	for(i=0;i<numero2;i++){
		resultado = resultado + numero1;
	}	    
	printf("Resultado �: %d",resultado);
	return 0;
}
