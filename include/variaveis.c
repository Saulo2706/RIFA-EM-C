
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdlib.h>
#define TOTAL_VETORES 1000

//i,j,y,z são contadores dentro de for

//cria��o de variaveis
	int i,j,y,z,opcoes_menu, opcoes_cad_cliente, opcoes_cad_produto, quantidade_rifas,faz_sorteio, rifa_do_cliente[TOTAL_VETORES],rifas_compradas[TOTAL_VETORES], cont, cont25, total_clientes, id_cliente[TOTAL_VETORES];

	char sair, nome_cliente [TOTAL_VETORES] [1000], endereco_cliente[TOTAL_VETORES] [1000], nome_produto [5] [90], cad_continuar, volta_menu, cpf [TOTAL_VETORES] [12],cpf_cadastrado [TOTAL_VETORES] [12], cpf_compara[12], escolha_altera_cliente;
	char escolha_altera_endereco;

