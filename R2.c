/*
	Preciado Gudiño Guillermina Alejandra  	Grupo:552
	Fecha: 23/08/2019
	GitHub... https://github.com/AlejandraP9
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int opc, n=0,n2,i, op, top=-1, tope=-1;
    int pila1[n], pila2[n];

    printf("Digite el tama%co que tendran las pilas: ",164);/*Elegiran en valor del vector de la pila*/
        scanf("%d", &n);

        n=n2;

    while(opc != 4){/*cuando la opcion sea 4 se cerrara el ciclo*/
            system("cls");/*Limpiara la pantalla y desplega el menu para modificar o mostrar la pila*/
        printf("1) push\n");
        printf("2) pop\n");
        printf("3) mostrar\n");
        printf("4) salir");
        printf("\n\n Opcion [ ]\b\b");
            scanf("%d", &opc);/*guarda el valor para ingresar al switch a la opcion del menu*/

            switch(opc){//inicio menu
                case 1 :
                    system("cls");

                    printf("Tenemos dos pilas de mismo valor, pila 1 y pila 2\n %cQue pila modificara%c\n Pila: ",168,63);//opcion para elegir la pila que se modificara en el push
                     scanf("%d", &op);

                     if(op==1&&top < n){

						top ++;
						printf("Introduce un numero a la pila ");
						scanf("%d", &pila1[top]);
						n2--;

                        }
                        else{
                            if(op==2&&tope < n){
                                tope ++;
                                printf("Introduce un numero a la pila ");
                                scanf("%d", &pila2[tope]);
                                n--;
                            }else{
                            printf("Las pilas estan llenas");
                            }
                        }
                        system("pause");


                    break;
                case 2 :
                     system("cls");

                    printf("Tenemos dos pilas de mismo valor, pila 1 y pila 2\n %cQue pila modificara%c\n Pila: ",168,63);
                     scanf("%d", &op);

                     if(op==1&&top>=0){

                                printf("El elemento que sale de la pila es %d.\n", pila1[top]);
                                pila1[top] = 0;
                                top--;

                        }
                        else{
                            if(op==2&&tope >= 0){
                                printf("El elemento que sale de la pila es %d.\n", pila2[tope]);
                                pila2[tope] = 0;
                                tope--;
                            }
                            else
                            {
                                printf("La pila esta vacia. \n");
                            }
                        }system("pause");

                    break;
                case 3 :
                    system("cls");
            if(tope>=0 && top >= 0){
                    printf("Pila 1:");
                for(i=0; i<top;i++)
                    printf("\t%d", pila1[i]);

                    printf("\n\nPila 2:");
                for(i=0; i<tope;i++)
                    printf("\t%d", pila2[i]);
            }printf("\n");
            system("pause");
                    break;
            }//fin menu
    }//fin while
return 0;
}
