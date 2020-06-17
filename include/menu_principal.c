#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>





void menuPrincipal(){

	system("cls"); //comando limpa a tela
	
	printf("\t                             Seja bem-vindo ao sistema de rifas \n");

	printf("========================================================================================================================\n");
	printf("\t                                    ***Menu Principal***                                                                ");
	printf("\n========================================================================================================================\n");
	printf("\n");
	printf ("\t                                  1 - Cadastro de premios \n");
	printf("\n");
	printf ("\t                                  2 - Cadastro de cliente \n");
	printf("\n");
	printf ("\t                                  3 - Comprar Numero \n");
	printf("\n");
	printf ("\t                                  4 - Realizar sorteio \n");
	printf("\n");
	printf ("\t                                  5 - ENCERRA O PROGRAMA \n");
	printf("\n");
	printf("========================================================================================================================\n");
	printf("\n");
	printf("\t                            Escolha a opcao desejada e precione enter:");


	while(!scanf("%d",&opcoes_menu)|| opcoes_menu <=0 || opcoes_menu > 5){		

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
		printf("************************************************************************************************************************");
		printf("\n                 ***A opcao selecionada nao existe, voce foi redirecionado ao menu principal***                         ");
		printf("************************************************************************************************************************");
		printf("\n");
		printf("\n");
		sleep(4);
		system("cls");
		main();
	

	}

	
		
			
			
}
		



