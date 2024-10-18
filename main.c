#include <stdio.h>
#include <stdlib.h>

void apresentacaoMenu();


int main(int argc, char *argv[]) {
	//chamada do metodo de menu principal, opcional
	apresentacaoMenu();
	
	
	//Declaração das variaveis
	int multiplicando, maximo, produto;
	int contagem = 1;

	//Pedido dos numeros e processamento dos mesmos
	printf("\n Insira o numero a calcular a tabuada...\n");
	scanf("%d", &multiplicando);
	
	printf("\n Insira o numero maximo da tabuada...\n");
	scanf(" %d", &maximo);
		
	//ciclo que cria a tabuada enquanto a condição for verdadeira
	while(contagem<=maximo){
		
		produto = multiplicando*contagem;
		
		printf("\n %d x %d = %d \n", multiplicando, contagem, produto);
		
		contagem++;
	}
		
	return 0;
}


/* APRESENTACAO DE MENU PRINCIPAL */
void apresentacaoMenu(){
	puts("======================================================");
	puts("||	    Di-Tec, Tecnologia e Inovacao	    ||");
	puts("||	     					    ||");
	puts("||	            PROGRAMACAO	        	    ||");
	puts("||	     					    ||");
	puts("||	   	    Linguagem C	       		    ||");
	puts("||	     					    ||");
	puts("||	  Por: Eng. Diassilua Paulo Simao           ||");
	puts("======================================================");
}
