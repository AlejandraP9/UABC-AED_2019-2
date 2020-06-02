#include <stdio.h>
#include <stdlib.h>
#define max 5/*valor maximo para colas y pilas*/

void pilas();/*menu para pilas*/
void colas();/*menun para colas*/

struct Pila/*estructura de pilas*/
{
    int tope;/*hasta donde llegara la pila*/
    int dato [max];/*El vector de la pila*/
};

struct Cola/*estructura colas*/
{
    int tope;/*hasta donde llegara la cola*/
    int dato[max];/*el vedctor de la cola*/
};

int main(){/*main, se usara como menu principal*/
    int op;

    while(op != 3){/*ciclo para que el menu se repita hasta que elñ usuario desee salir*/
            system ("cls");/*limpiar pantalla*/
    printf("Con que desea trabajar");
    printf("\n1)Pilas\n2)Colas\n3)Salir\nOpcion[ ]\b\b");/*El usuario decidira con que desea trabajar*/
        scanf("%d",&op);
     switch(op){
        case 1: pilas();/*lo envia a la funcion de pilas*/
                break;
        case 2: colas();/*lo envia a la funcion de colas*/
                break;
                }/*fin switch*/
    };/*fin ciclo while*/
    return 0;
}

void pilas(){/*menu de pilas  push pop llena vacia vaciar size*/
        struct Pila pila = {0};/*inicializo la pila*/
        int num =0, opc,i;

        while(opc != 7){
                system("cls");
            printf("\t\t\t\t\tMENU PILAS");
            printf("\n1)PUSH\n2)POP\n3)LLENA\n4)VACIA\n5)VACIAR\n6)SIZE\n7)VOLVER MENU PRINCIPAL\n\tOpcion[ ]\b\b");
                scanf("%d",&opc);

            switch(opc){
            case 1: system("cls");/*push*/
                    if(pila.tope < max){/*entrara siempre y cuando el vector de la pila sea menor a el maximo*/
                printf("Que dato deseas ingresar?");
                    scanf("%d", &num);
                pila.dato[pila.tope++] = num;
                printf("\n El dato introducido es %d\n", pila.dato[pila.tope-1]);
                    }
                    system("pause"); break;
            case 2: system("cls");/*pop*/
                    if(pila.tope >= 0){/*entrara siempre y cuando el vector de pila tenga algun contenido*/
                printf("\nSacar un dato de la pila");
                printf("\nEl dato que se saca es de %d\n", pila.dato[--pila.tope]);
                    }
                system("pause");break;
            case 3: system("cls");/*llena*/
                if(pila.tope == 4){
                    printf("VERDADERO\n");/*marcara verdadero si la pila esta llena*/
                }
                else{
                    printf("FALSO\n");
                }
                system("pause"); break;
            case 4:system ("cls");/*vacia*/
                if(pila.tope == -1){
                    printf("VERDADERO\n");/*marcara verdadero si la pila esta llena*/
                }
                else{
                    printf("FALSO\n");
                }
                system("pause"); break;
            case 5: system("cls");
                if(pila.tope >= 0){
                    for(i=pila.tope; i>=-1; i--){
                        pila.dato[i]=0;
                        pila.tope--;
                    }
                printf("La pila fue vaciada\n");
                }
                else{
                    printf("Vuelve al menu de pilas\n");
                }
                system("pause"); break;
            case 6: system("cls");
                    printf("La pila tiene %d elementos\n", pila.tope + 1 );
                    system("pause"); break;
            }

        };
}


void colas(){
    struct Cola cola = {0};
    int num =0, opc,i;

        while(opc != 5){/*insertasr remover llena vacia*/
            system("cls");
            printf("\t\t\t\t\tMENU COLAS");
            printf("\n1)INSERTAR\n2)REMOVER\n3)LLENA\n4)VACIA\n5)VOLVER AL MENU PRINCIPAL\n\tOpcion[ ]\b\b");
                scanf("%d",&opc);

                switch(opc){
                    case 1: system("cls");
                        if(cola.tope < max){
                            printf("Que dato deseas ingresar?");
                                scanf("%d", &num);
                            cola.dato[cola.tope++] = num;
                            printf("\n El dato introducido es %d\n", cola.dato[cola.tope-1]);
                            }
                            system("pause"); break;
                    case 2: //remover
                        system("cls");/*limpiar pantalla*/
						if(cola.tope>=0)
                            {
                                cola.dato[-1] = cola.dato[0];/*coloca el elemento de la cola[0][0] en la parte [-1][0], la cual no existira en nuestra matriz; remueve nuestra letra*/

                                for(i= 0; i <cola.tope; i++){
                                    cola.dato[i] = cola.dato[i+1];/*recorre la matriz para que la letra que se eliminara ya no tenga el espacio que disponia al principio; letra*/
                                    }
                                printf("El elemento que sale de la cola es %d.\n", cola.dato[-1]);/*muestra el caracter eliminado*/

                                cola.tope--;/*tope disminuye por haber removido un elemento*/
                            }
                            else
                            {
                                printf("Regrese al menu. \n");/*en caso de que no se encuentren elementos, solo nos dira que hacer*/
                            }system("pause");  break;
                    case 3: system("cls");
                            if(cola.tope ==4){
                                printf("VERDADERO\n");
                            }
                            else{
                                printf("FALSO\n");
                            }system ("pause"); break;
                    case 4: system("cls");
                            if(cola.tope ==-1){
                                printf("VERDADERO\n");
                            }
                            else{
                                printf("FALSO\n");
                            }system ("pause"); break;
                }

        };

}
