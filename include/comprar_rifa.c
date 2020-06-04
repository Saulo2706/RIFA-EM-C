// Sistema de Rifa
//Programadores Andre Soares Gomes e Saulo de Oliveira

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "variaveis.c"

void comprar_numero(){
    system("cls");
    i=0;
    printf("Digite o ID do cliente:");
    scanf("%i", &id_cliente[i]);

    i = id_cliente[i];

    printf("\t                                      Numeros disponiveis:");
	printf("\n");
	

	cont=0;
	cont25=0;
    
	for (cont = 0; cont < quantidade_rifas; cont++){

        if (cont25 == 25){
            printf("\n");
            cont25 = 0;
        }
		if (cont < 9){
			printf("0");

		}
		printf("%i ", cont+1);
		cont25 = cont25 + 1;

	}
		rifa:
		printf("\n\t                                      Escolha um numero de sorteio: ");
		fflush(stdin);
		scanf("%i",&rifa_do_cliente[i]);
/*
		rifas_compradas[i] = rifa_do_cliente[i];

		if(rifa_do_cliente[i] > quantidade_rifas || rifa_do_cliente[i] <= 0){
			printf("\nRifa invalida\n");
			goto rifa;
		}
		for(y=0; y<j; y++){

			if(rifa_do_cliente[i] == rifas_compradas[y]){
				printf("Rifa ja comprada");
				goto rifa;
			
			}
		}
*/
        printf("\n========================================================================================================================");
	    printf("                                Voltar ao menu principal precione qualquer tecla\n");
		system("pause");
		main();

}