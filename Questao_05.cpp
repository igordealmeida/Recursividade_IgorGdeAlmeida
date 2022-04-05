#include<stdio.h>

  int expoA(int nA, char A) 
{
  if(nA>0){
    return expoA(nA-1,A);
  }
}
int expoB(int nB, char B)
{
  if(nB>0){
    return expoB(nB-1,B);
  }
} 

int main()
{
  int seq,conta,contb;
  char a='a',b='b';

  printf("Digite o expoente de (a) e (b):");
  scanf("%d",&seq);
  expoA(seq,a);
  for(conta = 0; conta < seq; conta++)
  {
    printf("%c",expoA(seq,a));
  }
  expoB(seq,b); 
  for(contb = 0; contb < seq; contb++)
  {
    printf("%c", expoB(seq,b));
  }
  return 0;
}