
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "variaveis.c"





void cad_cliente_novo(){
//	rifa_do_cliente[TOTAL_VETORES] = 0;
	if (quantidade_rifas == 0){
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
		printf("\n              ***Ainda nao foi cadastrado um produto, apos cadastrar o produto, fazer o cadastro do cliente***          ");
		printf("************************************************************************************************************************\n");
		printf("\n");
		sleep(4);
		main();

	}

	else if (j == quantidade_rifas){
		printf("todas rifas vendidas");
		system ("pause");
		main();

	}

	do{



	total_clientes = total_clientes + 1;
	system("cls"); //comando limpa a tela
	printf("========================================================================================================================");
	printf("\n");
	printf("\t                                         ***Aba de Cliente Novo!***");
	printf("\n");
	printf("\t                                       ***Informe os dados abaixo***");
	printf("\n");
	printf("========================================================================================================================");
	printf("\n");
	printf("\t                                      Digite o nome dele: ");
	scanf(" %[^\n]s", &nome_cliente[j]);
	cpf:
	printf("\t                                      Digite o cpf dele (somente numeros): ");
	scanf("%12s", &cpf[j]);

	for(y=0; y<j; y++){

		if(cpf[j] == cpf_cadastrado[y]){
			printf("cpf ja cadastrado");	
			goto cpf;
		}
	}
	
	if (((cpf[j][0]>='0')&&(cpf[j][0]<='9'))&&((cpf[j][1]>='0')&&(cpf[j][1]<='9'))&&((cpf[j][2]>='0')&&(cpf[j][2]<='9'))&&
	((cpf[j][3]>='0')&&(cpf[j][3]<='9'))&&((cpf[j][4]>='0')&&(cpf[j][4]<='9'))&&((cpf[j][5]>='0')&&(cpf[j][5]<='9'))&&
	((cpf[j][6]>='0')&&(cpf[j][6]<='9'))&&((cpf[j][7]>='0')&&(cpf[j][7]<='9'))&&((cpf[j][8]>='0')&&(cpf[j][8]<='9'))&&
	((cpf[j][9]>='0')&&(cpf[j][9]<='9'))&&((cpf[j][10]>='0')&&(cpf[j][10]<='9'))&& strlen(cpf) == 11){
		printf("\t                                      Digite o endereco dele: ");	
		scanf(" %[^\n]s", &endereco_cliente[j]);

	}

	else{
		printf("************************************************************************************************************************");
		printf("\n                                       ***Voce digitou o CPF invalido***                                                ");
		printf("************************************************************************************************************************");
		goto cpf;

	}







	printf("\t                                      Numeros disponiveis:");
	printf("\n");
	

	cont=0;
	cont25=0;
    
	for (cont = 0; cont < quantidade_rifas; cont++){

        if (cont25 == 25){
            printf("\n");
            cont25 = 0;
        }
		if (cont < 9){
			printf("0");

		}
		printf("%i ", cont+1);
		cont25 = cont25 + 1;

	}
		rifa:
		printf("\n\t                                      Escolha um numero de sorteio: ");
		fflush(stdin);
		scanf("%i",&rifa_do_cliente[j]);

		rifas_compradas[j] = rifa_do_cliente[j];

		if(rifa_do_cliente[j] > quantidade_rifas || rifa_do_cliente[j] <= 0){
			printf("\nRifa invalida\n");
			goto rifa;
		}
		for(y=0; y<j; y++){

			if(rifa_do_cliente[j] == rifas_compradas[y]){
				printf("Rifa ja comprada");
				goto rifa;
			
			}
		}
		fora_for:
		printf("\n\t                                      Cliente cadastrado!\n");
		printf("\t                                      Deseja cadastrar mais um cliente? <S/N> ");
		scanf("%s", &cad_continuar);
		j++;
	
	}while(cad_continuar == 's' || cad_continuar == 'S');
	

			system("cls");
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
			printf("\n                                        ***Voltando ao Menu Principal***                                                ");
			printf("************************************************************************************************************************");
			printf("\n");
			sleep(2);
			main();
		

		}
		
	
