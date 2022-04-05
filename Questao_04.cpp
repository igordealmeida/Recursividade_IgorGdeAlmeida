#include <stdio.h>
#include <stdlib.h>

int MDC (a,b)
{
    if (b==0){
        return a; 
    }
    else{ 
        return MDC (b, (a % b));     
    }   
}

int main()
{
    int x, y; 
    printf("\nEntre com o primeiro numero: \n");
    scanf("%d", &x); 
    printf("\nEntre com o segundo numero: \n");
    scanf("%d", &y);
    printf("MDC: %d\n", MDC(x,y));   
    return 0;
}