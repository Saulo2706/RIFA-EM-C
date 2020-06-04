
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira


#include <stdio.h>
#include <stdlib.h>
#include "variaveis.c"
void edita_produto() {
	if(quantidade_rifas == 0){
		system("color C0");	
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("************************************************************************************************************************");
		printf("\n                         ***Essa Nao !! Voce nao cadastrou nenhum produto para editar***                                ");
		printf("************************************************************************************************************************");
		printf("\n");
		sleep(4);
		main();




	}

	system("cls");
		printf("========================================================================================================================\n");
		printf("\t                                   ***Edita Produto*** \n");
		printf("========================================================================================================================\n");
		printf("\n");
		printf("\t                                  1- Digite o nome do produto: ");
		scanf("%s", &nome_produto);
		printf("\n");
		printf("\t                                  2- Digite o numero de rifas para o sorteio:");
		while(!scanf("%d",&quantidade_rifas) || quantidade_rifas == 0){			
			while(getchar()!='\n')
			printf("\n");
			printf("\n\t                       ***Essa Nao !! Voce digitou um valor invalido, digite um valor valido***");                      
			printf("\n");
			printf("\n");
			printf("\n\t                              Digite o numero de rifas para o sorteio: ");

		}
		printf("========================================================================================================================\n");
	
	printf("\n\t Para voltar ao menu principal digite 1: ");
	scanf("%i", &volta_menu);
		if(volta_menu == 1){
			system("cls");
			main();
		}
	
	
}
