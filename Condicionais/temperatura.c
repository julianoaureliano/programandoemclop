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

/*Exercicio
leia uma matriz densa de um arquivo, calcule e imprima a soma dos valores de cada linha e de cada coluna
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
 float temperatura,c,f,k;
 char escala;
  scanf("%f %c", &temperatura, &escala);


  switch (escala)
  {
  case 'C':
    c=temperatura;
    f= (c * 1.8)+32;
    k = c + 273.15;
    printf("Celsius: %.2lf\nFarenheit: %.2lf\nKelvin: %.2lf",c,f,k);
    
    break;
  case 'F':
    f= temperatura;
    c=(f-32)/1.8;
    k = c + 273.15;
    printf("Celsius: %.2lf\nFarenheit: %.2lf\nKelvin: %.2lf",c,f,k);
    break;

    case 'K':
    k= temperatura;
    c=k-273.15;
    f= (c*1.8)+32;
    printf("Celsius: %.2lf\nFarenheit: %.2lf\nKelvin: %.2lf",c,f,k);
    break;
  default:
  printf("ERRADO 404");
    break;
  }

  return 0;
}