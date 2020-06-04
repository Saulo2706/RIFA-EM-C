
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <stdlib.h>
#include "variaveis.c"

void verifica_cliente(){

		if(rifa_do_cliente == 0){
		system("cls");
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
		printf("\n\t         ***Essa Nao !! Voce ainda nao cadastrou um cliente para editar, voltando ao menu Principal***          ");
		printf("************************************************************************************************************************");
		printf("\n");
		sleep(4);
		main();

	}
	
	
	system("cls"); //comando limpa a tela
	
	printf("========================================================================================================================");
	printf("\n");
	printf("\t                                   ***Lista de Clientes Cadastrados***                                                 ");
	printf("\n			                    	Nome,CPF,Endereco,Numero e ID do cliente");		
	printf("========================================================================================================================");
	
	for(i=0; i < total_clientes; i++){

			printf("\n\t                                  %s || %s || %s || %d || %d", nome_cliente [i],cpf[i],endereco_cliente[i],rifa_do_cliente[i],i);

	}

	
	printf("\n========================================================================================================================");
	printf("                                Voltar ao menu principal precione qualquer tecla\n");
		system("pause");
			main();



		
}
