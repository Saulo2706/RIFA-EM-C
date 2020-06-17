
// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <stdlib.h>


void cad_cliente_opcoes(){

	switch (opcoes_cad_cliente){
	
	case 1:
		
		cad_cliente_novo();	
	
	break;
	
	
	case 2:
	
		verifica_cliente();

	break;
	
	case 3:
				
		altera_cliente();
	
	break;

	case 4:

		main();

	break;
	
	default:

		system("cls");
		main();
			
	}
	}	
