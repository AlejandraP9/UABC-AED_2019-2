/*
	Preciado Gudi�o Guillermina Alejandra  	Grupo:552
	Fecha: 23/08/2019
	GitHub... https://github.com/AlejandraP9

    Se desea implementar dos pilas, y se dispone de un solo vector de N componentes. 
    Implemente ambas pilas de manera que se pueda aprovechar al máximo el vector. 
    Las operaciones de pila tendrán que llevar un parámetro adicional que indique 
    sobre qué pila se quiere realizar la operación (pila 1 ó pila 2).
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int opc, n=0,i, op, top=-1, tope=-1;
    int pila1[n], pila2[n];

    printf("Digite el tama%co que tendran las pilas: ",164);/*Elegiran en valor del vector de la pila*/
        scanf("%d", &n);


    while(opc != 4){/*cuando la opcion sea 4 se cerrara el ciclo*/
            system("cls");/*Limpiara la pantalla y desplega el menu para modificar o mostrar la pila*/
        printf("1) push\n");
        printf("2) pop\n");
        printf("3) mostrar\n");
        printf("4) salir");
        printf("\n\n Opcion [ ]\b\b");
            scanf("%d", &opc);/*guarda el valor para ingresar al switch a la opcion del menu*/

            switch(opc){//inicio menu
                case 1 ://push
                    system("cls");

                    printf("Tenemos dos pilas de mismo valor, pila 1 y pila 2\n %cQue pila modificara%c\n Pila: ",168,63);//opcion para elegir la pila que se modificara en el push
                     scanf("%d", &op);

                     if(op==1&&top < n){/*si el usiario elije la primer pila, se abrira el metodo para la primera*/
						top ++;
						printf("Introduce un numero a la pila ");
						scanf("%d", &pila1[top]);
                        tope = top;/*El tope de la 2da pila se afectara y asi ira disminuyendo con las iteraciones*/
                        }
                        else{
                            if(op==2&&tope < n){/*en caso de que el usuario elijera la 2da pila, se le abrira sus opciones*/
                                tope ++;
                                printf("Introduce un numero a la pila ");
                                scanf("%d", &pila2[tope]);
                            }else{
                            printf("Las pilas estan llenas");/*en caso que ambas esten llenas se lanzara la alerta al usuario*/
                            }
                        }
                        system("pause");
                    break;
                case 2 ://pop
                     system("cls");

                    printf("Tenemos dos pilas de mismo valor, pila 1 y pila 2\n %cQue pila modificara%c\n Pila: ",168,63);//opcion para elegir la pila que se modificara en el pop
                     scanf("%d", &op);

                     if(op==1&&top>=0){

                                printf("El elemento que sale de la pila es %d.\n", pila1[top]);//sacara el ultimo elemento de la pila 1
                                pila1[top] = 0;//ese elemento sera cero
                                top--;//para que no muestre mas ese elemento de la pila, el tope de la pila disminuira

                        }
                        else{
                            if(op==2&&tope >= 0){
                                printf("El elemento que sale de la pila es %d.\n", pila2[tope]);/*muestra el elemento que sacara de la 2da pila*/
                                pila2[tope] = 0;/*dicho elemento se hara cero*/
                                tope--;/*disminuira para que no sea mostrado*/
                            }
                            else
                            {
                                printf("La pila esta vacia. \n");/*opcion en caso que la pila elegida este vacia*/
                            }
                        }system("pause");

                    break;
                case 3 ://mostrar
                    system("cls");
            if(tope>=0 && top >= 0){/*mostrara ambas pilas en caso que tengan contenido*/
                    printf("Pila 1:");
                for(i=0; i<top;i++)/*recorre la pila*/
                    printf("\t%d", pila1[i]);

                    printf("\n\nPila 2:");
                for(i=0; i<tope;i++)/*recorre la pila 2*/
                    printf("\t%d", pila2[i]);
            } else{
                if(tope>=0 && top==-1){ /*si la pila 1 no tiene contenido solo recorrera la 2*/
                        printf("Pila 1: esta vacia");
                    printf("\n\nPila 2:");
                        for(i=0; i<tope;i++)/*recorre la pila2*/
                    printf("\t%d", pila2[i]);
                }else{
                    printf("Pila 1:");/*caso contrario al anterior solo recorre la pila 1*/
                        for(i=0; i<top;i++)/*recorre la pila 1*/
                    printf("\t%d", pila1[i]);
                    printf("\n\nPila 2: esta vacia");
                }
            }

            printf("\n");
            system("pause");
                    break;
            }//fin menu
    }//fin while
return 0;
}
