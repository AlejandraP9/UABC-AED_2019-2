/*Elaborar un programa que implementeun apila estatica. El programa debe mostrar un menu
de opciones donde el usuario pueda elegir la operacion que desea realizar, y cada operacion
debe ser ejecitada a traves de una funcion.
Implemente las operaciones basicas y complementarias de las pilas.*/

/*Nota Utilice los conceptos de apuntadores para realizar amboa programas*/


/*OPERACIONES COMPLEMENTARIAS PILAS: LLENA, VACIA, VACIAR, SIZE*/
#include <stdio.h>
#include <stdlib.h>

void push(int *pila, int *tope);/*pone u elemento al final de la pila*/
void pop(int *pila, int *tope);/*quita el ultimo elemento de la pila*/
void llena(int tope);/*imprime veradadero si la pila esta llena*/
void vacia(int tope);/*imprime verdadero si la pila esta vacia*/
void vaciar(int *pila, int *tope);/*vacia la pila por completo*/
void tamano(int tope);/*manda el tamaño de la pila*/



int main(){
    int pila[5], opc, tope=-1;

        while(opc != 7){
                system("cls");
            printf("\t\t\t\t\tMENU PILAS\n");
            printf("1)PUSH\n2)POP\n3)LLENA\n4))VACIA\n5)VACIAR\n6)SIZE\n7)SALIR\n\t\tOpcion [ ]\b\b");
                scanf("%d",&opc);
            switch(opc){
                case 1: system("cls");
                        push(pila, &tope);
                        break;
                case 2: system("cls");
                        pop(pila, &tope);
                        break;
                case 3: system("cls"); llena(tope);
                        break;
                case 4: system("cls");vacia(tope);
                        break;
                case 5: system("cls"); vaciar(pila,&tope);
                        break;
                case 6: system("cls"); tamano(tope);
                        break;

            }
        }
    return 0;
}

void push(int *pila, int *tope){
        if(*tope < 4){/*entrara siempre y cuando el vector de la pila sea menor a el maximo*/
                (*tope)++;
                printf("Que dato deseas ingresar? ");
                    scanf("%d", &pila[*tope]);
                printf("\n El dato introducido es %d\n", (pila[*tope]));
                printf("\n%d\n", *tope);
                    }
                    system("pause");

}

void pop(int *pila, int *tope){
            if(*tope >= 0){/*entrara siempre y cuando el vector de pila tenga algun contenido*/
                printf("\nSacar un dato de la pila");
                printf("\nEl dato que se saca es de %d\n", pila[*tope]);
                (*tope)--;
                    }
                system("pause");

}

void llena(int tope){
    if(tope==4){
            printf("VERDADERO");
            system("pause");
    }
    else{
        system("pause");
    }
}

void vacia(int tope){
    if (tope==-1){
            printf("VERDADERO");
            system("pause");
    }
    else{
        system("pause");
    }
}

void vaciar(int *pila, int *tope){
    int i;

    for(i=*tope; i >=0;i--){
        pila[i]=0;
        (*tope)--;
    }

    printf("Se a vaciado con exito\n");
    system("pause");
}

void tamano(int tope){
    printf("El tama%co actual de la pila es: %d\n",164,tope);
    system("pause");
}
