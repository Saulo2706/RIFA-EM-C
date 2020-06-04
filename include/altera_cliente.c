
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <stdlib.h>
#include "variaveis.c"


void altera_cliente(){

	if(rifa_do_cliente == 0){
		system ("cls");
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
		printf("\n                         ***Essa nao : (  Voce ainda nao cadastrou um usuario para editar***                            ");
		printf("************************************************************************************************************************\n");
		printf("\n");
		sleep(4);
		main();
	}
	system("cls"); //comando limpa a tela
	printf("========================================================================================================================");
	printf("\n");
	printf("\n\t                                   ***Alterar o cadastro do cliente***");
	printf("\n");
	printf("========================================================================================================================");
	
	printf("\n\t                                   Digite o numero de CPF do cliente: ");
	scanf (" %[^\n]s", &cpf_compara);
	
	if (strcmp (cpf, cpf_compara) == 0){
		
		printf("\n\t                               Nome do Cliente: %s", nome_cliente);
		printf("\n\t                               Endereco do Cliente: %s", endereco_cliente);
		printf("\n\t                               Deseja alterar o nome do cliente? <S/N>");
		scanf(" %[^\n]s", &escolha_altera_cliente);
			if (escolha_altera_cliente == 's' || escolha_altera_cliente == 'S')
			{
				printf("\n\t                               Qual o novo nome? ");
				scanf(" %[^\n]s", nome_cliente);	
				printf("\n\t                              Nome alterado!!");
			}	
		printf("\n\t                               Deseja alterar o endereco do cliente? <S/N>");
		scanf(" %[^\n]s", &escolha_altera_endereco);
			
			if (escolha_altera_endereco == 's' || escolha_altera_endereco == 'S'){

			printf("\n\t                               Qual o seu novo endereco? ");
			scanf(" %[^\n]s", &endereco_cliente); 
			printf("\n\t                              Endereco alterado!!");

			}
	

		system("pause");
		main();
	}


			
	if (cpf != cpf_compara) {
		system ("cls");
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
		printf("\n                            ***Essa nao : (  O CPF digitado ainda nao foi cadastrado***                                ");
		printf("************************************************************************************************************************\n");
		sleep(3);
		main();
	}


	

	}
		

