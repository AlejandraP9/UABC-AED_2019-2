#include <stdio.h>
#include <stdlib.h>

void pila(int pila[3], int tope);

int main(){
    int pila1[3], pila2[3], pila3[6];
    int opc, tope0= -1, tope1=-1, tope2=-1;

    while(opc!=3){
            system("cls");
        printf("Con que pila deseas trabajar?\n1) Pila 1\n2) Pila 2\n3)Salir\n\tOpcion [ ]\b\b");
        scanf("%d", &opc);
        switch(opc){
            case 1: system("cls");
                    pila(pila1,tope1);
                break;
            case 2: system("cls");
                    pila(pila2, tope2);
                break;
        }
        /*impresion de las pilas*/
    }
}

void pila(int pila[3], int tope){
    int op, palabra;
    char *pal;
    /*push, pop, llena, vacia, vaciar, size*/
    while(op!=7)
    printf("Que deseas hacer con la pila?\n");
    printf("1)Push \n2)Pop \n3)Llena \n4)Vacia \n5)Vaciar \n6)Size \n7)Salir \n\t\tOpcion [ ]\b\b");
        scanf("%d", &op);

        switch(op){
            case 1: system("cls");
                    if(tope < 3){
                        tope ++;
                        printf("Escriba el libro que va a guardar: ");
                            scanf("%s", pal);

                            palabra = atoi(pal);
                            pila[tope] = palabra;
                    }
                    else{
                        printf("\n");
                    }
                    system("pause");
                    break;
            case 2: system("cls");
                    if(tope >=0){

                            pila[tope] = palabra;
                            itoa(palabra, pal, 20);

                        printf("El libro que sale es: %s \n", pal);
                            tope --;
                    }
                    else{
                        printf("\n");
                    }
                    system("pause");
                    break;


            }
}
