
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <stdlib.h>


void opcoes_cad(){
	
	switch(opcoes_cad_produto){
	
	case 1:
		
		cad_produto_novo();
	
	break;
	
	
	case 2:
		
		edita_produto();
	
	break;		
	
	
	default:
	
	system("cls");
	system("color C0");
	printf("OPCAO INEXISTENTE FAVOR EXECUTAR NOVAMENTE \n");
	system("pause");
	opcoes_cad();
	
	}
}
