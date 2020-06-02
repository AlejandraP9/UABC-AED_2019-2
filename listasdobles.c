# include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct nodo{
    int dato;
    struct nodo * ant;
    struct nodo * sig;
};

struct nodo * crearnodo(int dato){
    struct nodo *p;
    p= (struct nodo*) malloc(sizeof (struct nodo));
    p ->dato = dato;
    p-> sig = NULL;
    p->ant =NULL;
    return (p);
}

struct nodo* insertar(struct nodo *inicio, int dato){
    struct nodo *p, *q = NULL, *nuevo;
    p= inicio;
    nuevo = crearnodo (dato);

        while(p!=NULL && dato <= p->dato){
        q=p;
        p=p->sig;
    }

    printf("p=%p y q=%p",p,q);
    getch();

    if(q ==NULL){
        nuevo ->sig=p;
        p->ant = nuevo;
        inicio=nuevo;
    }
    else{
            if(p==NULL){
                nuevo ->sig=q;
                q->ant = nuevo;
                inicio=nuevo;

            }else
            if(p!=NULL)
            {
                p->sig =nuevo;
                nuevo ->ant=p;
                nuevo ->sig = q;
                q->ant =nuevo;
            }
        q->sig =nuevo;
        nuevo ->ant=q;
        nuevo ->sig = p;
        p->ant =nuevo;
    }
    return inicio;
}


void mostrar(struct nodo *inicio){
    struct nodo *aux;

    if (!inicio){
        printf("Esta vacia");
    }
    else{
        aux=inicio;
        do{
            printf("\n%d",aux->dato);
            aux = aux->sig;
        }while(aux!=NULL);
    }
    getch();
}

struct nodo* eliminar(struct nodo *inicio, int dato){
    struct nodo *p,*q=NULL;
    p=inicio;

    while(p->dato!=dato && p!=NULL){
        p=q;
        p= p->sig;
    }

    if(q==NULL){
        inicio=p->sig;
        inicio->ant = NULL;
        free(p);
    }
    else
        if(p!=NULL){
        q->sig=p->sig;
        p->sig->ant =q;
        free(p);
    }
    else{
        printf("No enconttrado");
    }
    return inicio;
}


int main(){
    struct nodo *inicio=NULL;
    int dato, op;
    do{
        printf("\n1.Insertar");
        printf("\n2.Eliminar");
        printf("\n3.Imprimir");
        printf("\n4.Salir");
        printf("\nOPCION [ ]\b\b");
            scanf("%d",&op);

            switch(op){
                case 1: printf("\nDato");
                        scanf("%d",&dato);
                        if(inicio==NULL)
                            inicio=crearnodo(dato);
                        else
                            inicio=insertar(inicio,dato);
                    break;
                case 2: if (inicio==NULL){
                            printf("La lista esta vacia");
                            }else
                            {
                                printf("\nEscribe dato a borrar: ");
                                scanf("%d",&dato);
                                inicio=eliminar(inicio,dato);
                            }
                        break;
                case 3: mostrar(inicio);
                            break;
                case 4: break;
                }
    }while(op!=4);
}
