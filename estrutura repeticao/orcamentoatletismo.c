// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int quantidade,  totalquantidade;
  float preco,totalpreco,multiplicacao;
  totalpreco=0;
  totalquantidade=0;

  while(quantidade != -1){
    scanf(" %d", &quantidade);
    if(quantidade == (-1)){
      break;
    }
    scanf(" %f",&preco);
    
    multiplicacao = quantidade * preco;
    totalpreco = totalpreco + multiplicacao;
    totalquantidade = totalquantidade + quantidade;
    
      
  }
  printf("%d %.2f",totalquantidade,totalpreco);
  
  
return 0;
}