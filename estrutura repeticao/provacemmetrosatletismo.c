// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float a;
  int quantidade=0,serie=0,i,j;
  float tempomax,tempo;

    scanf("%f",&tempomax);

  while(tempomax != -1 && tempomax>0){
    scanf(" %f", &tempo);
    if(tempo == (-1)){
      break;
    }
    if(tempo<=tempomax){
        quantidade++;
    }
    
      
  }

  if(quantidade>0){
    for(i=quantidade;i>=0;i--){
        serie++;
        i = i-8;

    }
  }

  printf("%d %d",quantidade,serie);

  
  
return 0;
}