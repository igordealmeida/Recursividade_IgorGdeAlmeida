#include <stdio.h>
#include <stdlib.h>

int potencia (x,y)
{
    if ( y==0 ){
        return 1; 
    }
    else{
        return (x * potencia(x, y-1));   
    }   
}

int main()
{
    int resultado, a, b;
    printf("Entre com o valor da base: ");
    scanf("%d", &a);
    printf("Entre com o valor do expoente: ");
    scanf("%d", &b); 
    printf("O valor de potencia de %d na base %d e: %d ", b, a, potencia(a,b));
    return 0;
}