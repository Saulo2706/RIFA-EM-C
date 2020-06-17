
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include ".\include\variaveis.c"
#include ".\include\cad_cliente.c"
#include ".\include\cad_cliente_opcoes.c"
#include ".\include\cad_produto.c"
#include ".\include\cad_produto_novo.c"
#include ".\include\edita_produto.c"
#include ".\include\menu_principal.c"
#include ".\include\opcoes_cadastro.c"
#include ".\include\encerra.c"


// declara��o de valor inicial de variaveis

	opcoes_menu=0;
	faz_sorteio=0;
	opcoes_cad_cliente=0;
	quantidade_rifas=0;
	total_clientes=0;
	id_do_cliente=1;
	cpf_igual=-1;
	pula_vetor=0;






void cad_cliente_novo(){

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

	else if (id_do_cliente == quantidade_rifas){
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
		printf("\n                                          TODAS RIFAS VENDIDAS                                                         ");
		printf("************************************************************************************************************************\n");
		sleep(4);
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
	fflush(stdin);
	gets(pessoa_cliente[id_do_cliente].nome_do_cliente);
	
	cpf:
	printf("\t                                      Digite o cpf dele (somente numeros): ");
	scanf("%12s",&pessoa_cliente[id_do_cliente].cpf_do_cliente);

	for(y=0; y<id_do_cliente; y++){ 
		cpf_igual = strcmp(pessoa_cliente[id_do_cliente].cpf_do_cliente, pessoa_cliente[y].cpf_do_cliente);

		if(cpf_igual == 0){
			printf("\t                                      CPF JA CADASTRADO POR FAVOR DIGITE NOVAMENTE\n");
			goto cpf;
		}

	}

	if (((pessoa_cliente[id_do_cliente].cpf_do_cliente[0]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[0]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[1]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[1]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[2]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[2]<='9'))&&
	((pessoa_cliente[id_do_cliente].cpf_do_cliente[3]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[3]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[4]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[4]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[5]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[5]<='9'))&&
	((pessoa_cliente[id_do_cliente].cpf_do_cliente[6]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[6]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[7]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[7]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[8]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[8]<='9'))&&
	((pessoa_cliente[id_do_cliente].cpf_do_cliente[9]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[9]<='9'))&&((pessoa_cliente[id_do_cliente].cpf_do_cliente[10]>='0')&&(pessoa_cliente[id_do_cliente].cpf_do_cliente[10]<='9'))&&strlen(pessoa_cliente[id_do_cliente].cpf_do_cliente) == 11){
		printf("\t                                      Digite o endereco dele: ");	
		scanf(" %[^\n]s", &pessoa_cliente[id_do_cliente].endereco_do_cliente);
	}

	else{
		printf("************************************************************************************************************************");
		printf("\n                                       ***Voce digitou o CPF invalido***                                                ");
		printf("************************************************************************************************************************");
		goto cpf;
	}





		printf("\n\t                                      Cliente cadastrado! O id do cliente e: %d\n", id_do_cliente);
		id_cliente[id_do_cliente] = id_do_cliente;
		printf("\t                                      Deseja cadastrar mais um cliente? <S/N> ");
		scanf("%s", &cad_continuar);
		id_do_cliente++;
	
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
	
void verifica_cliente(){

		if(total_clientes == 0){
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
	printf("\n			                   ID do cliente,Nome,CPF,Endereco e Numero escolhido");		
	printf("========================================================================================================================");
	printf("\n\t                                  ID || NOME ||     CPF     || ENDERECO");
	for(i=1; i <= total_clientes; i++){
			
			printf("\n\t                                  %d || %s || %s || %s", id_cliente[i],pessoa_cliente[i].nome_do_cliente,pessoa_cliente[i].cpf_do_cliente,pessoa_cliente[i].endereco_do_cliente);

	}

	
	printf("\n========================================================================================================================");
	printf("                                Voltar ao menu principal precione qualquer tecla\n");
	system("pause");
	main();



		
}

void altera_cliente(){

	if(total_clientes == 0){
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
		solicita_id_cliente:
		printf("\n\t                                   Digite o id do cliente: ");
		scanf ("%d", &id_cliente_verifica);

		for (i = 0; i < TOTAL_VETORES; i++){
			if (id_cliente[i] == id_cliente_verifica){
				i = id_cliente[i];
				goto fora_for;
				achou++;
			}
		}

		if (achou == 0){

			printf("\nNao tem nenhum ID Correspondente ao digitado\n"); 
			goto solicita_id_cliente;
			
		}

		fora_for:
		
		
			
			printf("\n\t                               Nome do Cliente: %s",pessoa_cliente[i].nome_do_cliente);
			printf("\n\t                               Endereco do Cliente: %s",pessoa_cliente[i].endereco_do_cliente);
			printf("\n\t                               Deseja alterar o nome do cliente? <S/N>");
			scanf(" %[^\n]s", &escolha_altera_cliente);
				if (escolha_altera_cliente == 's' || escolha_altera_cliente == 'S'){
					printf("\n\t                               Qual o novo nome? ");	
					scanf(" %[^\n]s", &pessoa_cliente[i].nome_do_cliente);
					printf("\n\t                              Nome alterado!!");
				}	
			printf("\n\t                               Deseja alterar o endereco do cliente? <S/N>");
			scanf("%s", &escolha_altera_endereco);
				
				if (escolha_altera_endereco == 's' || escolha_altera_endereco == 'S'){

					printf("\n\t                               Qual o seu novo endereco? ");
					scanf(" %[^\n]s", &pessoa_cliente[i].endereco_do_cliente);
					printf("\n\t                              Endereco alterado!!");

				}
		

			system("pause");
			main();
}

void num_disponivel(){
	printf("\t                                      Numeros disponiveis:\n");
	int rifas_disponiveis[quantidade_rifas];

	for(y=1; y<=quantidade_rifas; y++){
		
		rifas_disponiveis[y]=y;
		if(rifas_compradas[y-1] == rifas_disponiveis[y]){
			printf("  ");
		}
		else{
			printf(" %i ", rifas_disponiveis[y]);
		}
	}

				

}


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

	else if(total_clientes == 0){

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
		printf("========================================================================================================================");
		printf("\n");
		printf("\t                                         ***Aba para a Compra de Rifa***");
		printf("\n");
		printf("========================================================================================================================");
		solicita_id:
		
		printf("\t                                      Digite o ID do cliente:");
		scanf("%i", &id_cliente_verifica);


		for (i = 0; i < TOTAL_VETORES; i++){
			if (id_cliente[i] == id_cliente_verifica){
				i = id_cliente[i];
				goto fora_for;
				achou++;
			}
		}

		if (achou == 0){

			printf("\t                                      Nao tem nenhum ID Correspondente ao digitado\n"); 
			goto solicita_id;
			
		}
		rifa:
		fora_for:
		
		
			
			printf("\n");
			gotoxy(0,6);
			num_disponivel();
			coluna=quantidade_rifas_cliente[i];
			printf("\n\t                                      Escolha um numero de sorteio(PARA SAIR DIGITE 0): ");
			scanf("%d",&pessoa_cliente[i].rifa_cliente[coluna]);
			
				
			



				
				//OS FOR ABAIXO SERVEM PARA VERIFICAÇÃO DE RIFA
				if(pessoa_cliente[i].rifa_cliente[coluna] > quantidade_rifas ||pessoa_cliente[i].rifa_cliente[coluna] < 0){
					printf("************************************************************************************************************************");
					printf("\n                                            ***RIFA INVALIDA***                                                         ");
					printf("***********************************************************************************************************************\n");
					sleep(2);
					system("cls");
					printf("========================================================================================================================");
					printf("\n");
					printf("\t                                         ***Aba para a Compra de Rifa***");
					printf("\n");
					printf("========================================================================================================================");
					goto rifa;
					
				}	

				if(pessoa_cliente[i].rifa_cliente[coluna] == 0){
					printf("\n========================================================================================================================");
					printf("                                                  Voltando ao menu Principal\n");
					sleep(2);
					main();
				}	
			
				for(y=101; y>= 0; y--){ 
					if(pessoa_cliente[i].rifa_cliente[coluna] == rifas_compradas[y]){
						printf("************************************************************************************************************************");
						printf("\n                                            ***RIFA JA COMPRADA***                                                      ");
						printf("************************************************************************************************************************\n");
						sleep(2);
						system("cls");
						printf("========================================================================================================================");
						printf("\n");
						printf("\t                                         ***Aba para a Compra de Rifa***                                              ");
						printf("\n");
						printf("========================================================================================================================");
						goto rifa;
					}
				}

				rifas_compradas[pula_vetor] = pessoa_cliente[i].rifa_cliente[coluna];
				pula_vetor++;
				
				quantidade_rifas_cliente[i]++;
				printf("\t                                      Deseja comprar mais um numero?<S/N>");
				scanf("%s", &cad_continuar);
		if(cad_continuar == 's' || cad_continuar == 'S'){
			system("cls");
			printf("========================================================================================================================");
			printf("\n");
			printf("\t                                         ***Aba para a Compra de Rifa***");
			printf("\n");
			printf("========================================================================================================================");
			goto rifa;
		}

		printf("\n========================================================================================================================");
		printf("                                                  Voltando ao menu Principal\n");
		sleep(2);
		main();
	}

}

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

	else if(total_clientes<= 0){

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
		pula_vetor=0;
		
		int num_ja_sorteados[TOTAL_VETORES];
		for(i=0; i <= 4; i++){
			sorteio:
			achou=0;
			faz_sorteio = 1+rand()%quantidade_rifas;
			num_sorteados[i] = faz_sorteio;

			num_ja_sorteados[pula_vetor]=num_sorteados[i];
			pula_vetor++;
			
			verifica:
			for (y=0; y <=quantidade_rifas; y++){
				if(num_sorteados[i] == num_ja_sorteados[y]){
					num_sorteados[i]=1+rand()%quantidade_rifas;
					goto verifica;
				}				
			}
			
			/*
			for(y=0; y<=quantidade_rifas; y++){ 
				while(num_sorteados[i] == num_sorteados[y]){
					num_sorteados[i]=1+rand()%quantidade_rifas;	
				}			
			}
			*/

			for(int z=1; z<=quantidade_rifas; z++){
				for(y=0; y<=quantidade_rifas; y++){
					if(num_sorteados[i] == pessoa_cliente[z].rifa_cliente[y]){
						printf("\n\t                                 Premio de %d%c lugar recebe um: %s \n", i+1,167, nome_produto[i]);
						printf("\n\t                                 Numero sorteado: %d \n",num_sorteados[i]);
						printf("\n\t                                 Nome do Ganhador:%s \n", pessoa_cliente[z].nome_do_cliente);
						printf("*************************************************************************************************************************");
						printf("\n");
						achou++;
					}
				}
			}
			if(achou==0){
				goto sorteio;
			}

		}
	
	}
					system("pause");
					main();	
}

	

	main(){


	SetConsoleTitle(" Sistema de Rifa "); //Titulo o sistema na Barra de tarefas
	


	system ("color E0");  // define cor

	//chamando void de menuPrincipal	
	menuPrincipal();
	
	 
	if(opcoes_menu == 1) {
	
		cad_produto();
		opcoes_cad();
	
			
	}


	if(opcoes_menu == 2) {
			
		cad_cliente();	
		cad_cliente_opcoes();

	}	


	
	if(opcoes_menu == 3) {
		comprar_numero();

	}
	if(opcoes_menu == 4) {
		sorteio();	
		
	}
		
	if(opcoes_menu == 5) {
		encerra_programa ();		
	}

}	
