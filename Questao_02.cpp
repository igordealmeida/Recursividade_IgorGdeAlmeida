#include <stdio.h>
#include <stdlib.h>

int Fibonacci (int N)
{
    if (( N==1 ) || ( N==2 )){
        return 1; 
    }
    else{ 
        return (Fibonacci(N-1) + Fibonacci(N-2));    
    }   
}

int main()
{
    int seq, cont;
    printf("\nEntre com o numero de termos da sequencia: \n");
    scanf("%d", &seq); 
    for (cont = 1; cont <= seq; cont++){
        printf("%d  ", Fibonacci (cont));   
    }
    return 0;
}