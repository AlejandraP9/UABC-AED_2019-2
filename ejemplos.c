#include <stdio.h>

int factorial(int n);
int fibonacci(int n);

int main(){
    int n;
        printf("Digite un valor para hacer los ejercicios:");
            scanf("%d",&n);

            printf("\nFACTORIAL: %d ! = %d",n,factorial(n));
            printf("\nFIBONACCI: %d",fibonacci(n));

    return 0;
}

int factorial (int n){
    if(n <= 1){
        return 1;//caso base
    }
    else{
        return n*factorial(n-1);//caso recursivo
    }
}

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
