/*
	Preciado Gudiño Guillermina Alejandra  	Grupo:552
	Fecha: 28/08/2019
	GitHub... https://github.com/AlejandraP9
*/

#include<stdio.h>
#include<stdlib.h>

/*

operaciones complementarias:
llenar : regresar verdadero si la pila esta llena
vacia: regresa verdadero si la pila esta vacia
*/

void main()
{
	int cola [6] = {0,0,0,0,0,0} , tope = -1 , opcion=0 , i;/*Asigne un acola de 6 elementos inicializada en 0, tope que sera mi contador de unidades en la cola, esta en menos uno ya
	la cola no tiene ningun elemento reciente, opcion para el menu y la i como otro contador en un for*/

	while(opcion !=5)/*El ciclo terminara si el valor es igual o diferente a 5*/
	{
		system("cls");/*limpiara la pantalla para no tener cochinero en la linea de comando*/
		printf("1)insertar \n");/*opcion de llenar la cola*/
		printf("2)remover \n");/*remueve el primer elemento de la cola*/
		printf("3)llena \n");/*muestra verdadero si la cola esta llena y falso si no lo esta*/
		printf("4)vacia \n");/*muestra verdadero si la cola esta vacia y falso si no lo esta*/
		printf("5)Salir \n");/*Sale del menu*/

		printf("Elije la operacion a ejecutar: ");
			scanf("%d" , &opcion);

		switch(opcion)/*menu*/
			{
				case 1: //insertar
						system("cls");
					if( tope < 5 )/*si la cola que se asigno es menor a 5, entrara al metodo*/
					{
						tope ++;/*incrementa el tope, como esta inicializado en -1, ahora estara en 0 en la primer iteracion y asi hasta llegar a 5*/
						printf("Introduce un numero a la cola");
						scanf("%d", &cola[tope]);/*pedimos al usuario un valor que se ira acumulando en la cola*/
					}
					else
					{
						printf("Regrese al menu. \n");/*si llega a ser que la cola esta llena, nos pedira que regresemos al menu principal*/
					} system("pause");
					break;

				case 2 : //remover
                        system("cls");
						if(tope>=0)
                            {
                                cola[-1] = cola[0];
                                for(i= 0; i <tope; i++){
                                    cola[i]=cola[i+1];
                                }

                                printf("El elemento que sale de la cola es %d.\n", cola [-1]);

                                tope--;
                            }
                            else
                            {
                                printf("Regrese al menu. \n");
                            }system("pause");
                            break;
				case 3 : //llena
						system("cls");
						if(tope==4){
							printf("Verdadero\n");
						}
						else
						{
							printf("Falso.\n");
						}system("pause");
						break;
				case 4 : //vacia
						system("cls");
						if(tope==-1){
							printf("Verdadero.\n");
						}
						else
						{
							printf("Falso.\n");
						}system("pause");
						break;
                            }

            }
}
