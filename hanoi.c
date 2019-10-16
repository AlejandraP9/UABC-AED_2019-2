/*
	Preciado Gudiño Guillermina Alejandra Grupo: 552
	Fecha: 16/10/2019
	GitHub ... https://github.com/AlejandraP9
*/

#include<stdio.h>

void hanoi(int n, int origen, int destino, int aux); //FUNCION PARA LAS TORRES DE HANOI

int main(){
    int n;

        printf("Digite el numero de discos para LA TORRE DE HANOI: ");
            scanf("%d",&n);//EL NUMERO QUE EL USUARIO DESEE DE AROS EN NUESTRO JUEGO

        hanoi(n,1,3,2);
        /*EL PRIMER VALOR SERA EL NUMERO DE AROS, EL SEGUNDO VALOR QUE DAMOS ES LA POSICION EN
        EL QUE ESTAN, QUIERE DECIR EL PRIMER PALO EN LA QUE ESTAN APILADAS NUESTROS AROS, POR LO
        CUAL ES UN UNO (1), EL SEGUNDO VALOR ES NUESTRO DESTINO, ES DECIR DONDE LLEGARAN NUESTROS 
        AROS, Y EL ULTIMO ES EL PALO ES UN AUXILIAR, ES DECIR DONDE NUESTROS AROS SOLO PASARAN MAS
        NO SE QUEDARAN*/
    return 0;
}

void hanoi(int n, int origen, int destino, int aux){

    if(n == 1){
        printf("[%d]-->[%d]\n",origen, destino);/*SI NUESTRO N ES 1 SOLO SE IMPRIMIRA QUE PASO DEL ORIGEN AL DESTINO*/
    } else
    {
        hanoi(n-1,origen,aux, destino);/*ENTRARA EN CICLO PARA SABER DONDE SE IMPRIMIRA Y SABER EL ACOMODO*/
        printf("[%d]-->[%d]\n",origen, destino);
        hanoi(n-1,aux,destino,origen);
    }
}