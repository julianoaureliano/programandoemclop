// compila o arquivo shell : gcc arquivo.c -o nomedoarquivo -g(>sequiserdebugar)
// executa o arquivo : ./nomedoarquivo
// executa o arquivo com entradas : ./nomedoarquivo < entrada.txt
// executa o arquivo com entradas e saida: ./nomedoarquivo < entrada > saida
// (Git) git status = para ver as atualizaçoes e mudancas dos arquivos
// *salve o arquivo antes*(Git) git add . = para carregar todos os arquivos para o commit
// (Git) git commit -m "colocarmensagem" = carregar os arquivos para enviar com a mensagem
// (Git) git push origin main = enviar os arquivos atualizados
// (Git) git fetch = "sincroniza" os repositorios, para saber se tem alguma atualização no repositorio
// (Git) git pull origin main = para baixar/atualizar os arquivos locais com o do repositorio do github

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