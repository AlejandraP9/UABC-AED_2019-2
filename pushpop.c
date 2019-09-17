/*
	Preciado Gudiño Guillermina Alejandra  	Grupo:552
	Fecha: 23/08/2019
	GitHub... https://github.com/AlejandraP9
*/

#include<stdio.h>
#include<stdlib.h>

/*

operaciones complementarias:
llenar : regresar verdadero si la pila esta llena
vacia: regresa verdadero si la pila esta vacia
vaciar: elimin atodos los elementos de la pila
size: regresa la cantidad de elementos que contiene la pila
*/

void main()
{
	int pila [5] = {0,0,0,0,0} , tope = -1 , opcion=0 , i;

	while(opcion !=7)
	{
		system("cls");
		printf("1)Push \n");
		printf("2)Pop \n");
		printf("3)Llenar \n");
		printf("4)vacia \n");
		printf("5)vaciar \n");
		printf("6)size \n");
		printf("7)Salir \n");

		printf("Elije la operacion a ejecutar: ");
			scanf("%d" , &opcion);

		switch(opcion)
			{
				case 1: //push
						system("cls");
					if( tope < 4 )
					{
						tope ++;
						printf("Introduce un numero a la pila ");
						scanf("%d", &pila[tope]);
					}
					else
					{
						printf("La pila esta llena. \n");
					} system("pause");
					break;

				case 2 : //pop
                        system("cls");
						if(tope>=0)
                            {
                                printf("El elemento que sale de la pila es %d.\n", pila [tope]);
                                pila[tope] = 0;
                                tope--;
                            }
                            else
                            {
                                printf("La pila esta vacia. \n");
                            }system("pause");
                            break;
				case 3 : //llenar
						system("cls");
						if(tope==4){
							printf("La pila esta llena");
						}
						else
						{
							printf("La pila esta incompleta");
						}system("pause");
						break;
				case 4 : //vacia
						system("cls");
						if(tope==-1){
							printf("La pila esta vacia");
						}
						else
						{
							printf("La pila tiene contenido");
						}system("pause");
						break;
				case 5 :// vaciar
							system("cls");
						if(tope == 4 || tope < 4){
							for(i=4; i<=-1;i--){
								pila[i]=0;
								tope--;
							}
							printf("La pila esta vacia");
						}system("pause");
						break;
				case 6 : // size
						system("cls");
				 		printf("El tamaño actual de la pila: %d", tope+1);
						 system("pause");
						break;
                            }
						
            }
}