// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "variaveis.c"

void comprar_numero(){
	if(quantidade_rifas <= 0){
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

	else if(j <= 0){

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
		printf("\n                     ***Essa nao : (  Voce ainda nao cadastrou um usuario para fazer o sorteio***                       ");
		printf("************************************************************************************************************************\n");
		printf("\n");
		sleep(4);
		main();


	}

	else{
	

		achou =0;
		system("cls");
		solicita_id:
		printf("Digite o ID do cliente:");
		scanf("%i", &id_cliente_verifica);


		for (i = 0; i < TOTAL_VETORES; i++){
			if (id_cliente[i] == id_cliente_verifica){
				i = id_cliente[i];
				goto fora_for;
				achou++;
			}
		}

		if (achou == 0){

			printf("\nNao tem nenhum ID Correspondente ao digitado\n"); 
			goto solicita_id;
			
		}

		fora_for:
		

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
			scanf("%i",&rifa_do_cliente[i]);

			rifas_compradas[i] = rifa_do_cliente[i];

			//OS FOR ABAIXO SERVEM PARA VERIFICAÇÃO DE RIFA
			if(rifa_do_cliente[i] > quantidade_rifas || rifa_do_cliente[i] <= 0){
				printf("\nRifa invalida\n");
				goto rifa;
			}
			for(y=0; y<i; y++){ 
				if(rifa_do_cliente[i] == rifas_compradas[y]){
					printf("Rifa ja comprada");
					goto rifa;				
				}
			}
			for(y=100; y>i; y--){ 
				if(rifa_do_cliente[i] == rifas_compradas[y]){
					printf("Rifa ja comprada");
					goto rifa;				
				}
			}
			
	
			printf("\n========================================================================================================================");
			printf("                                Voltar ao menu principal precione qualquer tecla\n");
			system("pause");
			main();
	}

}