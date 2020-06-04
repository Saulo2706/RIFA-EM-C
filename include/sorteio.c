
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

	else if(rifa_do_cliente <= 0){

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
		z=0;
		sorteio:
	
				srand(time(NULL));
				faz_sorteio = 1+rand()%quantidade_rifas;

			

				if(faz_sorteio == rifa_do_cliente[z]){
					printf("\n                                                 Parabens %s voce ganhou um(a) %s", nome_cliente[z], nome_produto);
					printf("\n                                                 O numero sorteado foi: %i\n", faz_sorteio);
					system("pause");
					main();
				}
				else{
					z++;
					goto sorteio;				
				}
										
						
					
				
	}
}
