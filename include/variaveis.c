
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdlib.h>
#define TOTAL_VETORES 1000

//i,y são contadores dentro de for

//criacao de variaveis
	int 
		i,
		y,
		pula_vetor,
		opcoes_menu,
		opcoes_cad_cliente,
		opcoes_cad_produto,
		quantidade_rifas,
		faz_sorteio,
		num_sorteados[5],
		rifas_compradas[TOTAL_VETORES],
		cpf_igual,
		coluna,
		total_clientes, 
		id_cliente[TOTAL_VETORES], 
		id_cliente_verifica,
		id_do_cliente, 
		achou,
		quantidade_rifas_cliente[TOTAL_VETORES]
	;

	char 
		sair,
		nome_produto [5] [90], 
		cad_continuar, 
		volta_menu,
		cpf_cadastrado [TOTAL_VETORES] [12],
		cpf_compara[12], 
		escolha_altera_cliente, 
		escolha_altera_endereco
	;
	

	typedef struct{
		char nome_do_cliente[1000];
		char endereco_do_cliente[1000];
		char cpf_do_cliente[12];
		int rifa_cliente[TOTAL_VETORES];
	}TipoPessoa;

	TipoPessoa pessoa_cliente[TOTAL_VETORES];




