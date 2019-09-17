/*
	Preciado Gudi#o Guillermina Alejandra  	Grupo:552
	Fecha: 30/08/2019
	GitHub... https://github.com/AlejandraP9

	Se desea implementar un servidor de impresión, el usuario manda imprimir un caracter 
	y el número de veces que desea que ese caracter se imprima.
*/

#include<stdio.h>
#include<stdlib.h>

/*
operaciones complementarias:
llenar : regresar verdadero si la cola esta llena
vacia: regresa verdadero si la cola esta vacia

mostrar: mostrara el primer elemento de la cola, a la vez que este se removera para recorrer los demas elementos
*/

void main()
{

	int cola [10][2], tope = -1 , opcion=0 , i, caracter, n;/*Asigne una cola de 6 elementos inicializada en 0, tope que sera mi contador de unidades en la cola, esta en menos uno ya
	la cola no tiene ningun elemento reciente, opcion para el menu y la i como otro contador en un for, la n es solo para las iteraciones que busca el usuario*/
    char letra;
	while(opcion !=6)/*El ciclo terminara si el valor es igual o diferente a 5*/
	{
		system("cls");/*limpiara la pantalla para no tener cochinero en la linea de comando*/

		printf("1)insertar \n");/*opcion de llenar la cola*/
		printf("2)remover \n");/*remueve el primer elemento de la cola*/
		printf("3)llena \n");/*muestra verdadero si la cola esta llena y falso si no lo esta*/
		printf("4)vacia \n");/*muestra verdadero si la cola esta vacia y falso si no lo esta*/
		printf("5)mostrar\n");/*muestra lo que hay en el inicio de la cola*/
		printf("6)Salir \n");/*Sale del menu*/

		printf("Elije la operacion a ejecutar [ ]\b\b");
			scanf("%d" , &opcion);

            fflush(stdin);/*liberar memoria ya que no me dejaba hacer algunas acciones a la hora de correrlo*/

		switch(opcion)/*menu*/
			{
				case 1: //insertar

					if( tope < 5 )/*si la cola que se asigno es menor a 5, entrara al metodo*/
					{
					    system("cls");
						tope ++;/*incrementa el tope, como esta inicializado en -1, ahora estara en 0 en la primer iteracion y asi hasta llegar a 5*/
						printf("Digite el caracter que desea poner en la cola: ");
							scanf("%c", &letra);
                            int caracter = (int) letra -48; /*convierte el caracter que se le dio en letra, a entero para que funcione como codigo ascii*/
						printf("\nDigite el numero de veces que se imprimira el caracter: ");
							scanf("%d", &n);

							cola [tope][0]= caracter;/*dentro de la matriz, la columna 0 pertenece a guardar las letras*/
							cola [tope][1]= n;/* en la matriz, la columna 1 sera para guardar las iteraciones que pide el usuario*/
					}
					else
					{
						printf("Regrese al menu. \n");/*si llega a ser que la cola esta llena, nos pedira que regresemos al menu principal*/
					} system("pause");
					break;

				case 2 : //remover
                        system("cls");/*limpiar pantalla*/
						if(tope>=0)
                            {
                                cola[-1][0] = cola[0][0];/*coloca el elemento de la cola[0][0] en la parte [-1][0], la cual no existira en nuestra matriz; remueve nuestra letra*/
                                cola[-1][1] = cola[0][1];/*coloca el elemento de la cola[0][1] en la parte [-1][1], la cual no existira en nuestra matriz; remueve el numero de iteraciones*/

                                for(i= 0; i <tope; i++){
                                    cola[i][0]=cola[i+1][0];/*recorre la matriz para que la letra que se eliminara ya no tenga el espacio que disponia al principio; letra*/
                                    cola[i][1]=cola[i+1][1];/*recorre la matriz para que la letra que se eliminara ya no tenga el espacio que disponia al principio; numero de iteraciones*/
                                    }

                                char letra = (char) (cola[-1][0] +48);/*convierte la letra que se elimino a char */


                                printf("El elemento que sale de la cola es %c.\n", letra);/*muestra el caracter eliminado*/

                                tope--;/*tope disminuye por haber removido un elemento*/
                            }
                            else
                            {
                                printf("Regrese al menu. \n");/*en caso de que no se encuentren elementos, solo nos dira que hacer*/
                            }system("pause");
                            break;
				case 3 : //llena
						system("cls");
						if(tope==4){
							printf("Verdadero\n");/*nos retorna veradero si la matriz esta llena*/
						}
						else
						{
							printf("Falso.\n");/*nos retorna falso si la matriz no esta llena*/
						}system("pause");
						break;
				case 4 : //vacia
						system("cls");
						if(tope==-1){
							printf("Verdadero.\n");/*retorna verdadero si la matriz esta vacia*/
						}
						else
						{
							printf("Falso.\n");/*retorna falso si la matriz no esta vacia*/
						}system("pause");
						break;
                case 5 : /*mostrar*/
                            system("cls");
                            if(tope>=0)
                            {
                                /*hace lo mismo que la opcion de remover ya que iremos recorriendola mientras las muestra*/
                                cola[-1][0] = cola[0][0];/*coloca el elemento de la cola[0][0] en la parte [-1][0], la cual no existira en nuestra matriz; remueve nuestra letra*/
                                cola[-1][1] = cola[0][1];/*coloca el elemento de la cola[0][1] en la parte [-1][1], la cual no existira en nuestra matriz; remueve el numero de iteraciones*/

                                for(i= 0; i <tope; i++){
                                    cola[i][0]=cola[i+1][0];/*recorre la matriz para que la letra que se eliminara ya no tenga el espacio que disponia al principio; letra*/
                                    cola[i][1]=cola[i+1][1];/*recorre la matriz para que la letra que se eliminara ya no tenga el espacio que disponia al principio; numero de iteraciones*/
                                    }

                                char letra = (char) (cola[-1][0] +48);/*convierte la letra que se elimino a char */


                                for (i = 0; i < cola[-1][1]; i++){ /*el ciclo for hara que imprimamos el numero de veces que el usuario deseo imprimir el caracter que convertimos anteriormente*/
                                        printf("%c\t", letra);/*imprime la letra con un espacio definido por tabulador*/
                                }

                                tope--;/*disminuye la matriz*/
                                printf("\n");
                            }
                            else
                            {
                                printf("Regrese al menu. \n");/*en caso que no tenga nada la matriz, no nos dira nada mas que la opcion de volver a nuestro menu*/
                            }system("pause");
                            break;

                            }/*fin menu*/

            }/*fin while*/
}
