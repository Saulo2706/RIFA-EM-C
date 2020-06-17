

// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <stdlib.h>


void cad_produto_novo() {
	

	if(quantidade_rifas != 0){

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
		printf("\n                   ***Essa Nao !! Voce ja cadastrou um produto por favor edite se necessario***                         ");
		printf("************************************************************************************************************************");
		printf("\n");
		sleep(4);
		main();
	}

	else{
			system("cls");	
			printf("========================================================================================================================\n");
			printf("\t                                   ***Cadastro de Produto Novo*** \n");
			printf("========================================================================================================================\n");
			printf("\n");
			for(i=0; i <=4 ; i++){
			printf("\t                                  Digite o nome do produto [%d]: ", i+1);
			scanf(" %[^\n]s", &nome_produto[i]);
			printf("\n");
			}
			solicita_num:
			printf("\t                                  Digite o numero de rifas para o sorteio(maximo de 100 numeros):");
			while(!scanf("%d",&quantidade_rifas) || quantidade_rifas == 0){			
			while(getchar()!='\n')
			printf("\n");
			printf("\n                        ***Essa Nao !! Voce digitou um valor invalido, digite um valor valido***                        ");                    
			printf("\n");
			printf("\n");
			printf("\n\t                                  Digite o numero de rifas para o sorteio: ");


			}
			if(quantidade_rifas > 100){
			printf("\n                        ***Essa Nao !! Voce digitou um valor invalido, digite um valor valido***                        ");
			goto solicita_num;
			}
			printf("\n\t                                  Salvando dados, por favor aguarde.\n");
			printf("========================================================================================================================\n");
			sleep(2);

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
			printf("************************************************************************************************************************");
			printf("\n                                          Dados cadastrados, voltando ao menu                                           ");
			printf("************************************************************************************************************************");
			sleep(2);
			main();
		}
}

