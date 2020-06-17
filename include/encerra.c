
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira


#include <stdio.h>
#include <stdlib.h>

#include "gotoxy.c"

	
	void encerra_programa (){


		system("cls");
		printf("========================================================================================================================\n");
		printf("                                   Voce deseja sair mesmo? <S/N>");
		printf("\n========================================================================================================================");
		gotoxy(65,1);
		scanf("%s", &sair);
	

	if (sair == 's' || sair == 'S'){
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
		printf("========================================================================================================================\n");
		printf("\n                                      ***Obrigado por testar nosso programa***");
		printf("\n");
		printf("\n========================================================================================================================");
		sleep(3);
		
		
		exit(0);	
	}

	if (sair != 's' ){

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
		sleep (4);

		main();


	} 


	}
