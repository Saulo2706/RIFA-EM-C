
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira


#include <stdio.h>
#include <stdlib.h>
#include "variaveis.c"


void cad_produto(){
	system("cls");	
	printf("========================================================================================================================\n");
	printf("\t                                   ***Cadastro de Produto*** \n");
	printf("========================================================================================================================\n");
	printf("\n");
	printf("\t                                  1- Cadastrar um produto novo \n");
	printf("\n");
	printf("\t                                  2- Editar produto \n");
	printf("\n");
	printf("\t                                  3- Voltar ao Menu Principal");
	printf("\n");
	printf("========================================================================================================================\n");
	printf("\n");
	printf("\t                                  Escolha a opcao desejada:");
	
	while(!scanf("%d",&opcoes_cad_produto) || opcoes_cad_produto > 3 || opcoes_cad_produto <= 0){		

		while(getchar()!='\n')	
								
		printf("\n");
		system("cls"); //comando limpa a tela
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
		printf("\n");
		printf("************************************************************************************************************************");
		printf("\n                       A opcao selecionada nao existe, voce foi redirecionado ao menu principal                         ");
		printf("************************************************************************************************************************");
		printf("\n");
		printf("\n");
		sleep(4);
		main();
	
	}
	if (opcoes_cad_produto == 1){
		

		system("cls");
		cad_produto_novo();
			
	
	}
	if (opcoes_cad_produto == 2){
		system("cls");
		edita_produto();
			
			
	}
	if (opcoes_cad_produto == 3){

		main();

	}
		
		
}
	


