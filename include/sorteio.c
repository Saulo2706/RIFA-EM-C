
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "variaveis.c"

void sorteio(){

	
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

	else if(rifa_do_cliente<= 0){

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
		
		system("cls");
		
		printf("========================================================================================================================\n");
		printf("\t                                      ***Bem-Vindo a tela de Sorteio***                                                  ");
		printf("\n========================================================================================================================\n");
		srand(time(NULL));
		z=0;
		
		for(i=0; i <= 4; i++){
			sorteio:

			faz_sorteio = 1+rand()%quantidade_rifas;
			num_sorteados[i] = faz_sorteio;
			num_ja_sorteados[i] = num_sorteados[i];

			for(y=0; y<i; y++){ 
				if(num_sorteados[i] == num_ja_sorteados[y]){
					goto sorteio;				
				}
			}
			for(y=quantidade_rifas; y>i; y--){ 
				if(num_sorteados[i] == num_ja_sorteados[y]){
					goto sorteio;				
				}
			}

			if(num_sorteados[i] == rifa_do_cliente[z]){
				printf("\n\t                                 Premio de %d%c lugar recebe um: %s \n", i+1,167, nome_produto[i]);
				printf("\n\t                                 Numero sorteado: %d \n",num_sorteados[i]);
				printf("\n\t                                 Nome do Ganhador:%s ", nome_cliente[i]);
				printf("\n");
			}
			else{
				z++;
				goto sorteio;			
			}
			

		}
	
	}
					system("pause");
					main();	
}
