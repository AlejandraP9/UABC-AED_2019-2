#include <stdio.h>
#include <stdlib.h>

typedef struct arbol{
    int i; /*datos*/
    struct arbol *p; /*Apunta al padre*/
    struct arbol *iz; /*Apunta a hijo izquierdo*/
    struct arbol *der;/*Apunta al hij derecho*/
}tipoArbol;

tipoArbol *Nodo(int dato){
    tipoArbol *aux = (tipoArbol*) malloc(sizeof(tipoArbol));
    if(dato > aux ){
        aux->iz=NULL;
    }else
        aux->der=NULL;

    return aux;
}

typedef tipoArbol *tipoArbolPtr;
void insertar(tipoArbolPtr *ar,int dato);
//void eliminar(tipoArbolPtr *ar,int dato);
void busqueda(tipoArbolPtr *ar,int dato);


int main(){
    int op,n;
    tipoArbolPtr *elem;

    do{
        system("cls");

        printf("1)Insertar al arbol\n2)Eliminar\n3)Salir\n\n\t\tOpcop [ ]\b\b");
            scanf("%d",&op);

            switch(op){
                case 1: system("cls");
                        printf("%cQue valor desea agregar? ",168);
                            scanf("%d",&n);
                        insertar(elem,n);
                    break;
                case 2: //system("cls");
                        //printf("%cQue valor desea eliminar? ",168);
                            scanf("%d",&n);
                        //eliminar(&elem,n);
                    break;
                case 3:
                    break;
            }
    }while(op=!3);

    return 0;
}

void insertar(tipoArbolPtr *ar,int dato){
    tipoArbolPtr nuevo,ant,act;

    nuevo=Nodo(dato);
    if(!nuevo){
        printf(" No hay memoria");
    }
    else{
        if(*ar==NULL){
            *ar=nuevo;
        }
        else{
            ant=*ar;
            act=*ar;
                while(act !=NULL && dato!=ant->i){
                    ant=act;
                    if(dato < ant->i)
                        act = act->iz;
                    else
                        act = act->der;
                }

            if(dato == ant->i)
                printf("dato existente");
            else{
                if(dato < ant->i)
                    ant->iz=nuevo;
                else
                    ant->der=nuevo;
            nuevo->p=ant;
            }
        }
    }
}
