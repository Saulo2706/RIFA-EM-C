
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira



#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include ".\include\altera_cliente.c"
#include ".\include\variaveis.c"
#include ".\include\cad_cliente.c"
#include ".\include\cad_cliente_opcoes.c"
#include ".\include\cad_novo_cliente.c"
#include ".\include\verifica_cliente.c"
#include ".\include\cad_produto.c"
#include ".\include\cad_produto_novo.c"
#include ".\include\edita_produto.c"
#include ".\include\menu_principal.c"
#include ".\include\opcoes_cadastro.c"
#include ".\include\comprar_rifa.c"
#include ".\include\encerra.c"
#include ".\include\sorteio.c"







// declara��o de valor inicial de variaveis

	opcoes_menu=0;
	faz_sorteio=0;
	opcoes_cad_cliente=0;
	quantidade_rifas=0;
	total_clientes=0;
	j=0;
	cpf_igual=-1;
	

	





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
