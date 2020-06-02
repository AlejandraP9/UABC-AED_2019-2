# include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct nodo{
    char nom[10];
    int dato;
    struct nodo * signom;//siguiente a nombre
    struct nodo * sigdato;//siguiente a promedio
};

struct nodo * crearnodo(/*int dato,*/ char nom[]){
    struct nodo *p;
    p= (struct nodo*) malloc(sizeof (struct nodo));
    p -> nom[10] = nom[10];
    p ->dato = dato;
    p-> sig = NULL;
    p->ant =NULL;
    return (p);
}

struct nodo* insertar(struct nodo *inicio, /*int dato,*/char nom[]){
    struct nodo *p, *q = NULL, *nuevo;
    p= inicio;
    nuevo = crearnodo (/*dato,*/nom);

        while(p!=NULL && strcmp(nom,p->nom)==0
              ){
        q=p;
        p=p->sig;
    }

    printf("p=%p y q=%p",p,q);
    getch();

    if(q ==NULL){
        nuevo ->sig=p;
        p->ant = nuevo;printf("\nDato");
                        scanf("%d",&dato);
        inicio=nuevo;
    }
    else{
        q->sig =nuevo;
        nuevo ->ant=q;
        nuevo ->sig = p;
        if(p!=NULL)
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
            printf("\n%s",aux->nom);
            aux = aux->sig;
        }while(aux!=NULL);
    }
    getch();
}

struct nodo* eliminar(struct nodo *inicio, char nom[]){
    struct nodo *p,*q=NULL;
    p=inicio;

    while(p->nom!=nom && p!=NULL){
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
        printf("No encontrado");
    }
    return inicio;
}


int main(){
    struct nodo *inicio=NULL;
    int dato, op;
    char nom[10];

    do{
        printf("\n1.Insertar");
        printf("\n2.Eliminar");
        printf("\n3.Imprimir");
        printf("\n4.Salir");
        printf("\nOPCION [ ]\b\b");
            scanf("%d",&op);

            switch(op){
                case 1: printf("\nNombre: ");
                        scanf("%s",nom);
                        /*printf("\nCalificacion: ");
                        scanf("%d",&dato);*/
                        if(inicio==NULL)
                            inicio=crearnodo(/*dato,*/nom);
                        else
                            inicio=insertar(inicio/*,dato*/,nom);
                    break;
                case 2: if (inicio==NULL){
                            printf("La lista esta vacia");
                            }else
                            {
                                printf("\nEscribe el nombre del alumno a borrar: ");
                                scanf("%s",nom);
                                inicio=eliminar(inicio,nom);
                            }
                        break;
                case 3: mostrar(inicio);
                            break;
                case 4: break;
                }
    }while(op!=4);
}
