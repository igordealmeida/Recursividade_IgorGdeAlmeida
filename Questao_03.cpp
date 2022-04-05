#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inversor(char string[], int cont)
{
    if(cont==1){
        return string[0];
    }
    else{
        return string[cont-1];
    }
}

int main()
{
    char palavra[20];
    int tamanho;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    for ( tamanho = strlen(palavra); tamanho!= 0; tamanho--){
    printf("%c", inversor(palavra, tamanho)); 
    }
}