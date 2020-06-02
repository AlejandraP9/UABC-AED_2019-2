#include <stdio.h>
/*
Escribit una funcion que devuelva la suma de los primeros N enteros positivos**
Escribir una funcion que devuelva la suma de los enteros positivos pares desde N hasta 2, donde N es un numero par**
Escribir una funcion que transforme un numero entero positivo a notacion binaria
Escribit una funcion que calcule el maximo comun divisor de dos enteros positivos
*/
int suma (int n);

int main(){
    int n;
        printf("Digite un valor para hacer los ejercicios:");
            scanf("%d",&n);

            printf("\nSUMA: %d  = %d",n,suma(n));
            if(n%2==0){
            printf("\nSUMA CON PARES: %d  = %d",n,sumapar(n));
            }
            else
            printf("\nTu numero no es par, no se puede hacer la operacion");


            printf("\nBINARIO = %d",binario(n));


    return 0;
}

int suma (int n){
    if(n <= 1){
        return 1;//caso base
    }
    else{
        return n + suma(n-1);//caso recursivo
    }
}


int sumapar (int n){
    if(n == 2 ){
        return 2;//caso base
    }
    else {
        return n + sumapar(n-2);//caso recursivo
    }
}

int binario(int n){
    int t;

    if(n==0 || n==1){
        return n;
    }
    else
    if(n ==2 || n==3){
        return (n/2)*10 + n%2 ;
    }
    else if(n>2 && n%2==0){
            t=n/2;
        return binario(t)*10;
    }
    else{
        t=n/2;
        return binario(t)*10 +n%2;
    }

}
